#include "Replication.h"

static void(*ServerReplicateActorsOG)(UReplicationDriver* Driver) = decltype(ServerReplicateActorsOG)(Sigma::Offsets::ServerReplicateActors);
void Replication::ServerReplicateActors(UReplicationDriver* Driver)
{
	return ServerReplicateActorsOG(Driver);
}
