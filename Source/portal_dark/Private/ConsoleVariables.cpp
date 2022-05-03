
#include "ConsoleVariables.h"

static TAutoConsoleVariable<int32> CVarPortalAdjustmentEnabled(
	TEXT("portal.AdjustmentEnabled"),
	1,
	TEXT("Whether to try to adjust the created portal so it would not be opened out of bounds of the surface."),
	ECVF_Default
);

static TAutoConsoleVariable<int32> CVarPortalAdjustmentVisualizeSteps(
	TEXT("portal.AdjustmentVisualizeSteps"),
	0,
	TEXT("When trying to align a portal on a portalable surface, show traces that were performed."),
	ECVF_Default
);

static TAutoConsoleVariable<int32> CVarPortalAdjustmentMultiplier(
	TEXT("portal.AdjustmentMultiplier"),
	1,
	TEXT("When trying to align a portal on a portalable surface, defines the size of the step for each trace. The smaller the better."),
	ECVF_Default
);

static TAutoConsoleVariable<int32> CVarPortalPlayerVisualizePrediction(
	TEXT("portal.PlayerVisualizePrediction"),
	0,
	TEXT("Visualize player location prediction which triggers collision with portals."),
	ECVF_Default
);