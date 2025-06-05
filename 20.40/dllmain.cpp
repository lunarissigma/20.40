#include "framework.h"
#include "Misc.h"
#include "GameMode.h"

void Main() {
    Sigma::Offsets::Init();
    MH_Initialize();
    AllocConsole();
    FILE* F;
    freopen_s(&F, "CONOUT$", "w", stdout);
    SetConsoleTitleA("20.40: Setting Up");
    Sleep(5000);

    GameMode::Hook();
    Misc::Hook();

    MH_EnableHook(MH_ALL_HOOKS);
    UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);
    *(bool*)Sigma::Offsets::GIsClient = false;
    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"open Artemis_Terrain", nullptr);
    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), TEXT("log LogFortUIDirector off"), nullptr);
}

BOOL APIENTRY DllMain(HMODULE Module, DWORD Reason, LPVOID Reserved)
{
    switch (Reason)
    {
    case 1: std::thread(Main).detach();
    case 0: break;
    }
    return 1;
}

