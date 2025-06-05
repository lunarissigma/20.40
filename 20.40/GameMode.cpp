#include "GameMode.h"
#include "Utils.h"

inline UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld* InWorld, FName NetDriverDefinition);
inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World);
inline void (*ServerReplicateActors)(UReplicationDriver* ReplicationDriver);
static inline TArray<UFortAbilitySet*> AbilitySets;


bool GameMode::ReadyToStartMatch(AFortGameModeAthena* Gamemode)
{
	TArray<AActor*> WarmupActors;
	UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);
	auto GameState = (AFortGameStateAthena*)Gamemode->GameState;
	static bool bReady = false;
	if (!bReady)
	{

		bReady = true;

		Gamemode->WarmupRequiredPlayerCount = 1;
		UFortPlaylistAthena* Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");
		Gamemode->WarmupRequiredPlayerCount = 1;
		GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;
		GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GameState->CurrentPlaylistInfo.ArrayReplicationKey++;

		if (GameState->CurrentPlaylistInfo.ArrayReplicationKey == -1)
		{
			GameState->CurrentPlaylistInfo.ArrayReplicationKey++;
		}

		GameState->OnRep_CurrentPlaylistInfo();

		GameState->CurrentPlaylistId = Playlist->PlaylistId;
		GameState->OnRep_CurrentPlaylistId();

		Gamemode->GameSession->MaxPlayers = 100;

		Gamemode->CurrentPlaylistName = Playlist->PlaylistName;
		Gamemode->CurrentPlaylistId = Playlist->PlaylistId;

		CreateNetDriver = decltype(CreateNetDriver)(Sigma::Offsets::CreateNetDriver);
		SetWorld = decltype(SetWorld)(Sigma::Offsets::SetWorld);
		InitListen = decltype(InitListen)(Sigma::Offsets::InitListen);
		static bool (*InitHost)(UObject * Beacon) = decltype(InitHost)(Sigma::Offsets::InitHost);
		static void (*PauseBeaconRequests)(UObject * Beacon, bool bPause) = decltype(PauseBeaconRequests)(Sigma::Offsets::PauseBeaconRequests);

		float TimeSeconds = UGameplayStatics::GetDefaultObj()->GetTimeSeconds(UWorld::GetWorld());
		float Duration = 99999.f;

		GameState->WarmupCountdownEndTime = TimeSeconds + Duration;
		Gamemode->WarmupCountdownDuration = Duration;
		GameState->WarmupCountdownStartTime = TimeSeconds;
		Gamemode->WarmupEarlyCountdownDuration = Duration;

		auto Beacon = Utils::SpawnActor<AFortOnlineBeaconHost>({});

		Beacon->ListenPort = 7777;

		InitHost(Beacon);
		PauseBeaconRequests(Beacon, false);

		UWorld::GetWorld()->NetDriver = Beacon->NetDriver;

		if (UWorld::GetWorld()->NetDriver)
		{
			UWorld::GetWorld()->NetDriver->World = UWorld::GetWorld();
			UWorld::GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver");

			FString Err;
			auto URL = FURL();
			URL.Port = 7777;

			if (!InitListen(UWorld::GetWorld()->NetDriver, UWorld::GetWorld(), URL, true, Err))
			{
				std::cout << "Fail InitListen" << std::endl;
			}
			SetWorld(UWorld::GetWorld()->NetDriver, UWorld::GetWorld());

			ServerReplicateActors = decltype(ServerReplicateActors)(0x66);

			UWorld::GetWorld()->LevelCollections[0].NetDriver = UWorld::GetWorld()->NetDriver;
			UWorld::GetWorld()->LevelCollections[1].NetDriver = UWorld::GetWorld()->NetDriver;


			//AbilitySets.Add(UObject::FindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer"));

			//for (int i = 0; i < UObject::GObjects->Num(); i++)
			//{
			//	auto Object = UObject::GObjects->GetByIndex(i);

			//	if (!Object || !Object->Class || Object->IsDefaultObject())
			//		continue;

			//	if (auto GameFeatureData = reinterpret_cast<UFortGameFeatureData*>(Object))
			//	{
			//		auto AbilitySet = GameFeatureData->PlayerAbilitySet.Get();
			//		if (!AbilitySet) continue;
			//		AbilitySets.Add(AbilitySet);
			//	}
			//}

			SetConsoleTitleA("20.40: Listening");
			Gamemode->bWorldIsReady = true;
		}
	}

	auto Ret = Gamemode->AlivePlayers.Num() > 0;

	return Ret;

}

APawn* GameMode::SpawnDefaultPawnFor(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* Controller, AActor* StartSpot)
{
    return GameMode->SpawnDefaultPawnAtTransform(Controller, StartSpot->GetTransform());
}

void GameMode::Hook()
{
    Utils::Hook<AFortGameModeAthena>(Sigma::Offsets::ReadyToStartMatchVft, ReadyToStartMatch);
    Utils::Hook<AFortGameModeAthena>(Sigma::Offsets::SpawnDefaultPawnForVft, SpawnDefaultPawnFor);
}
