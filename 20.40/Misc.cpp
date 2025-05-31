#include "Misc.h"
#include "Utils.h"

float Misc::GetMaxTickRate()
{
    if (bLateGame) return 120.f;

    return 30.f;
}

static void(*TickFlushOG)(UNetDriver* Driver);
void Misc::TickFlush(UNetDriver* Driver)
{
    if (Driver->ReplicationDriver) {
        Replication::ServerReplicateActors(Driver->ReplicationDriver);
    }

    return TickFlushOG(Driver);
}

int Misc::GetNetMode()
{
    return 1;
}

bool Misc::RetTrue()
{
    return true;
}

bool Misc::ReturnFalse()
{
    return false;
}

void Misc::Hook()
{
    Utils::Hook(Sigma::Offsets::TickFlush, TickFlush, TickFlushOG);
    Utils::Hook(Sigma::Offsets::GetMaxTickRate, GetMaxTickRate);
    Utils::Hook(Sigma::Offsets::WorldNetMode, GetNetMode);
    Utils::Hook(Sigma::Offsets::ImageBase + 0x1204e80, ReturnFalse);
    Utils::Hook(Sigma::Offsets::ImageBase + 0x83f36d4, ReturnFalse);
}
