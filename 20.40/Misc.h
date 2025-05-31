#pragma once
#include "framework.h"
#include "Replication.h"

class Misc {
private:
	static float GetMaxTickRate();
	static void TickFlush(UNetDriver* Driver);
	static int GetNetMode();
	static bool RetTrue();
	static bool ReturnFalse();
public:
	static void Hook();
};