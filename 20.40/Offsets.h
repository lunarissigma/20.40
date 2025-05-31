#pragma once
#include <stdint.h>
#include <stdexcept>
#include <vector>
#include <intrin.h>

class Sigma
{
public:
	class Offsets
	{
	public:
		static inline uint64_t ImageBase;
		static inline uint64_t Step;
		static inline uint64_t StepExplicitProperty;
		static inline uint64_t CreateNetDriver;
		static inline uint64_t InitHost;
		static inline uint64_t PauseBeaconRequests;
		static inline uint64_t InitListen;
		static inline uint64_t SetWorld;
		static inline uint64_t WorldNetMode;
		static inline uint64_t GIsClient;
		static inline uint64_t TickFlush;
		static inline uint64_t GetMaxTickRate;
		static inline uint64_t GetWorldContext;
		static inline uint64_t DispatchRequest;
		static inline uint64_t StaticFindObject;
		static inline uint64_t StaticLoadObject;
		static inline uint64_t ApplyCharacterCustomization;
		static inline uint64_t InternalTryActivateAbility;
		static inline uint64_t InternalServerTryActivateAbility;
		static inline uint64_t ServerReplicateActors;
		static inline uint64_t ConstructAbilitySpec;
		static inline uint64_t Realloc;
		static inline uint64_t StartNewSafeZonePhase;
		static inline uint64_t InternalGiveAbility;
		static inline uint64_t PickTeam;
		static inline uint32_t ReadyToStartMatchVft;
		static inline uint32_t SpawnDefaultPawnForVft;
		static inline uint32_t ServerAcknowledgePossessionVft;
		static inline uint32_t HandleStartingNewPlayerVft;
		static inline uint32_t ServerExecuteInventoryItemVft;
		static inline uint32_t ServerAttemptAircraftJumpVft;
		static inline uint32_t InternalServerTryActivateAbilityVft;
		static inline uint64_t GameSessionPatch;
		static inline uint64_t EncryptionPatch;

		static inline std::vector<uint64_t> NullFuncs;

		static inline std::vector<uint64_t> RetTrueFuncs;

		static int Init()
		{
			ImageBase = *(uint64_t*)(__readgsqword(0x60) + 0x10);
			Step = ImageBase + 0xf6d050;
			StepExplicitProperty = ImageBase + 0x8abd180;
			CreateNetDriver = ImageBase + 0x17b0ea0;
			InitHost = ImageBase + 0x567d4a4;
			GetWorldContext = ImageBase + 0xf711a0;
			PauseBeaconRequests = ImageBase + 0x6d00a04;
			InitListen = ImageBase + 0x567d81c;
			SetWorld = ImageBase + 0x17ada40;
			WorldNetMode = ImageBase + 0xf5d6f8;
			GIsClient = ImageBase + 0xc425a74;
			TickFlush = ImageBase + 0xd56288;
			GetMaxTickRate = ImageBase + 0xe1b0cc;
			StaticFindObject = ImageBase + 0xf14d30;
			StaticLoadObject = ImageBase + 0x1a34ba8;
			ServerReplicateActors = ImageBase + 0x11333c0;
			Realloc = ImageBase + 0x1d6e680;
			ConstructAbilitySpec = ImageBase + 0x5247bc8;
			InternalGiveAbility = ImageBase + 0x5250bd8;
			StartNewSafeZonePhase = ImageBase + 0x66151a8;
			ReadyToStartMatchVft = ImageBase + 0x118;
			SpawnDefaultPawnForVft = ImageBase + 0xdb;
			ServerAcknowledgePossessionVft = ImageBase + 0x125;
			HandleStartingNewPlayerVft = ImageBase + 0xe1;
			ServerExecuteInventoryItemVft = ImageBase + 0x231;
			ServerAttemptAircraftJumpVft = ImageBase + 0x9f;
			InternalServerTryActivateAbilityVft = ImageBase + 0x10b;
			GameSessionPatch = ImageBase + 0x1207905;

			return 0;
		}
	};
};
#define InitOffsets auto _offsetInitter = Sigma::Offsets::Init();