
#include "ConsoleVariables.h"

static TAutoConsoleVariable<int32> CVarPortalAdjustmentEnabled(
	TEXT("portal.AdjustmentEnabled"),
	1,
	TEXT("Whether to try to adjust the created portal so it would not be opened out of bounds of the surface."),
	ECVF_Default
);

static TAutoConsoleVariable<int32> CVarPortalAnySurface(
	TEXT("portal.AnySurface"),
	0,
	TEXT("Allow portals to be placed on any surface."),
	ECVF_Default
);

static TAutoConsoleVariable<int32> CVarPortalPlayerVisualizePrediction(
	TEXT("portal.PlayerVisualizePrediction"),
	0,
	TEXT("Visualize player location prediction which triggers collision with portals."),
	ECVF_Default
);