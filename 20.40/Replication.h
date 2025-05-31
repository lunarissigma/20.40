#pragma once
#include "framework.h"
#include "Offsets.h"

class Replication {
public:
	static void ServerReplicateActors(UReplicationDriver* Driver);
};