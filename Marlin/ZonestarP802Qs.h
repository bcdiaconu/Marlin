#pragma once

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_X   50
#define ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_Y    0
#define ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_Z -2.7

#define SERVO0_PIN                              20
#define ZONESTAR_P802QS_MAX_PROBE_ERROR_DIFF     3

#define ZONESTAR_P802QS_MESH_MIN_X MAX(MESH_INSET, X_MIN_POS + ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_X)
#define ZONESTAR_P802QS_MESH_MIN_Y MAX(MESH_INSET, Y_MIN_POS + ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_Y)

#define ZONESTAR_P802QS_PROBE_INSET             10

#define ZONESTAR_P802QS_FEEDRATE_X             150
#define ZONESTAR_P802QS_FEEDRATE_Y             100
#define ZONESTAR_P802QS_FEEDRATE_Z               8
#define ZONESTAR_P802QS_FEEDRATE_E              50
#define FIL_RUNOUT_PIN                          15 //Y_MAX_PIN
#define UBL_DEVEL_DEBUGGING                        // Enable in-depth UBL bed leveling details with G29 W

#undef MAX
#undef MIN
