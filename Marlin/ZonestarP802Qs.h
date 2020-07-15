#pragma once

#define ZS_P802Q_MAX(a, b) ((a) > (b) ? (a) : (b))
#define ZS_P802Q_MIN(a, b) ((a) < (b) ? (a) : (b))

#define ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_X   38
#define ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_Y   10
#define ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_Z    0

#define SERVO0_PIN                              20
#define ZONESTAR_P802QS_MAX_PROBE_ERROR_DIFF     3

#define ZONESTAR_P802QS_MESH_MIN_X ZS_P802Q_MAX(MESH_INSET, X_MIN_POS + ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_X)
#define ZONESTAR_P802QS_MESH_MIN_Y ZS_P802Q_MAX(MESH_INSET, Y_MIN_POS + ZONESTAR_P802QS_NOZZLE_PROBE_OFFSET_Y)

#define ZONESTAR_P802QS_PROBE_INSET             10

#define ZONESTAR_P802QS_FEEDRATE_X             150
#define ZONESTAR_P802QS_FEEDRATE_Y             100
#define ZONESTAR_P802QS_FEEDRATE_Z               8
#define ZONESTAR_P802QS_FEEDRATE_E              50
#define FIL_RUNOUT_PIN                          15 //Y_MAX_PIN

/* Debugging */

//#define UBL_DEVEL_DEBUGGING                      // Enable in-depth UBL bed leveling details with G29 W
//#define DEBUG_LEVELING_FEATURE
//#define M114_DETAIL                              // Use 'M114` for details to check planner calculations
//#define M114_REALTIME                            // Real current position based on forward kinematics
