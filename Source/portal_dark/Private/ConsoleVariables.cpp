
#include "ConsoleVariables.h"

static TAutoConsoleVariable<int32> CVarPortalAdjustmentVisualizeSteps(
	TEXT("portal.AdjustmentVisualizeSteps"),
	0,
	TEXT("When trying to align a portal on a portalable surface, show traces that were performed."),
	ECVF_Default
);

static TAutoConsoleVariable<int32> CVarPortalAdjustmentMultiplier(
	TEXT("portal.AdjustmentMultiplier"),
	25,
	TEXT("When trying to align a portal on a portalable surface, defines the size of the step for each trace. The smaller the better."),
	ECVF_Default
);
