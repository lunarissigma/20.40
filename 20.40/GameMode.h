#pragma once
#include "framework.h"
#include "Replication.h"

class GameMode {
private:
	static bool ReadyToStartMatch(AFortGameModeAthena* GameMode);
	static APawn* SpawnDefaultPawnFor(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* Controller, AActor* StartSpot);
public:
	static void Hook();
};