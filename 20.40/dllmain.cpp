#include "framework.h"
#include "Misc.h"

void Main() {
    AllocConsole();
    FILE* F;
    freopen_s(&F, "CONOUT$", "w", stdout);
    SetConsoleTitleA("20.40: Setting Up");
    Sleep(5000);

    MH_Initialize();

    Misc::Hook();

    MH_EnableHook(MH_ALL_HOOKS);
    UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);
    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"open Artemis_Terrain", nullptr);
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

