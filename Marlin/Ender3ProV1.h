#pragma once

#define E3PV1_MAX(a, b) ((a) > (b) ? (a) : (b))
#define E3PV1_MIN(a, b) ((a) < (b) ? (a) : (b))

#define E3PV1_NOZZLE_PROBE_OFFSET_X   -40
#define E3PV1_NOZZLE_PROBE_OFFSET_Y   -12
#define E3PV1_NOZZLE_PROBE_OFFSET_Z  -1.5

#define E3PV1_MAX_PROBE_ERROR_DIFF     3
#define E3PV1_PROBING_INSET           10

#define E3PV1_MESH_MIN_X E3PV1_MAX(MESH_INSET, X_MIN_POS + E3PV1_NOZZLE_PROBE_OFFSET_X)
#define E3PV1_MESH_MIN_Y E3PV1_MAX(MESH_INSET, Y_MIN_POS + E3PV1_NOZZLE_PROBE_OFFSET_Y)
#define E3PV1_MESH_MAX_X E3PV1_MIN(X_MAX_POS - MESH_INSET, X_MAX_POS + E3PV1_NOZZLE_PROBE_OFFSET_X)
#define E3PV1_MESH_MAX_Y E3PV1_MIN(Y_MAX_POS - MESH_INSET, Y_MAX_POS + E3PV1_NOZZLE_PROBE_OFFSET_Y)


#define E3PV1_FEEDRATE_X             500
#define E3PV1_FEEDRATE_Y             500
#define E3PV1_FEEDRATE_Z              20
#define E3PV1_FEEDRATE_E              25
// #define FIL_RUNOUT_PIN                15 //Y_MAX_PIN

// #define SD_DETECT_PIN                           49

/* Debugging */

//#define UBL_DEVEL_DEBUGGING                      // Enable in-depth UBL bed leveling details with G29 W
//#define DEBUG_LEVELING_FEATURE
//#define M114_DETAIL                              // Use 'M114` for details to check planner calculations
//#define M114_REALTIME                            // Real current position based on forward kinematics