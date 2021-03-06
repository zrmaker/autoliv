#ifndef _DISPATCH_H
#define _DISPATCH_H
#include <stdint.h>

namespace octopus
{

// All bit numbering in Autoliv is reversed. Here is a reversed version of dispatch.h.

typedef struct
{
  uint8_t data_channel_msb : 8;
  uint8_t data_channel_lsb : 8;
  uint8_t diag_code_msb : 8;
  uint8_t diag_code_lsb : 8;
  uint8_t : 2;
  uint8_t sensor_blockage_status : 2;
  uint8_t sensor_mode : 4;
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  uint8_t target_crc16_msb : 8;
  uint8_t target_crc16_lsb : 8;
} MsgStatusMessage;

typedef struct
{
  uint8_t : 8;
  uint8_t : 8;
  uint8_t : 8;
  uint8_t : 8;
  uint8_t : 8;
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  uint8_t error_msg : 4;
  uint8_t : 4;
  uint8_t : 8;
} MsgErrorMessage;

typedef struct
{
  uint8_t : 8;
  uint8_t : 8;
  uint8_t : 8;
  uint8_t : 8;
  uint8_t : 8;
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  uint8_t : 4;
  uint8_t target_format_type : 4;
  uint8_t : 8;
} MsgTargetGeneral;

typedef struct
{
  uint8_t sensor_2_mode : 4;
  uint8_t sensor_1_mode : 4;
  uint8_t sensor_4_mode : 4;
  uint8_t sensor_3_mode : 4;
  uint8_t data_channel_msb : 8;
  uint8_t : 4;
  uint8_t msg_counter : 4;
  uint8_t data_channel_lsb : 8;
  uint8_t byte_1 : 8;
  uint8_t byte_2 : 8;
  uint8_t byte_3 : 8;
} MsgSyncMessage;

typedef struct
{
  uint8_t meas_page_select : 4;
  uint8_t msg_counter : 4;
  uint8_t data_channel_1_msb : 8;
  uint8_t data_channel_1_lsb : 8;
  uint8_t data_channel_2_msb : 8;
  uint8_t data_channel_2_lsb : 8;
  uint8_t sync_msg_content : 8;
  uint8_t : 8;
  uint8_t : 8;
} MsgCommandMessage;

typedef struct
{
  uint8_t range_msb;
  uint8_t velocity_msb : 4;
  uint8_t range_lsb : 4;
  uint8_t bearing_msb : 2;
  uint8_t velocity_lsb : 6;
  uint8_t bearing_lsb : 8;
  uint8_t track_id : 4;
  uint8_t quality : 4;
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  uint8_t bearing_observed_msb : 4;
  uint8_t target_format_type : 4;
  uint8_t range_observed : 6;
  uint8_t bearing_observed_lsb : 2;
} MsgTargetPolarShort;

typedef struct
{
  uint8_t range_msb;
  uint8_t doppler_velocity_msb : 4;
  uint8_t range_lsb : 4;
  uint8_t bearing_msb : 2;
  uint8_t doppler_velocity_lsb : 6;
  uint8_t bearing_lsb : 8;
  uint8_t amplitude : 8;
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  uint8_t usage : 4;
  uint8_t target_format_type : 4;
  uint8_t doppler_alias : 8;
} MsgRawPolarShort;

typedef struct
{
  uint8_t distance_x_msb;
  uint8_t velocity_x_msb : 5;
  uint8_t distance_x_lsb : 3;
  uint8_t velocity_y_msb : 4;
  uint8_t velocity_x_lsb : 4;
  uint8_t distance_y_msb : 3;
  uint8_t velocity_y_lsb : 5;
  uint8_t distance_y_lsb : 8;
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  uint8_t obj_type : 4;
  uint8_t target_format_type : 4;
  uint8_t track_id : 4;
  uint8_t quality : 4;
} MsgTargetCartesian;

typedef struct
{
  uint8_t distance_x_msb;
  uint8_t track_id : 4;
  uint8_t distance_x_lsb : 4;
  uint8_t velocity_x_msb : 8;
  uint8_t velocity_y_msb : 6;
  uint8_t velocity_x_lsb : 2;
  uint8_t quality : 4;
  uint8_t velocity_y_lsb : 4;
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  uint8_t distance_y_msb : 4;
  uint8_t target_format_type : 4;
  uint8_t distance_y_lsb : 8;
} MsgTargetCartesianMid;

typedef struct
{
  uint8_t distance_x_msb;
  uint8_t track_id : 5;
  uint8_t distance_x_lsb : 3;
  uint8_t velocity_x_msb : 8;
  uint8_t velocity_y_msb : 6;
  uint8_t velocity_x_lsb : 2;
  uint8_t quality : 2;
  uint8_t scan_type : 2;
  uint8_t velocity_y_lsb : 4;
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  uint8_t distance_y_msb : 4;
  uint8_t target_format_type : 4;
  uint8_t distance_y_lsb : 8;
} MsgTargetCartesianMul;

typedef struct
{
  uint8_t seg_1_msb : 1;
  uint8_t seg_0 : 7;
  uint8_t seg_2_msb : 2;
  uint8_t seg_1_lsb : 6;
  uint8_t seg_3_msb : 3;
  uint8_t seg_2_lsb : 5;
  uint8_t seg_4_msb : 4;
  uint8_t seg_3_lsb : 4;
  uint8_t seg_5_msb : 5;
  uint8_t seg_4_lsb : 3;
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  uint8_t seg_6_msb : 2;
  uint8_t seg_5_lsb : 2;
  uint8_t target_format_type : 4;
  uint8_t seg_idx : 3;
  uint8_t seg_6_lsb : 5;
} MsgFreespaceSegments;

typedef struct
{
  uint8_t range_msb;

  uint8_t doppler_velocity_msb : 4;
  uint8_t range_lsb : 4;
  
  uint8_t doppler_velocity_lsb : 6;
  uint8_t bearing_msb : 2;
  //uint8_t ds:1;
  
  //uint8_t bs:1;
  uint8_t bearing_lsb : 8;
  uint8_t amplitude : 8;
  
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  
  uint8_t target_format_type : 4;
  uint8_t usage : 4;
  uint8_t doppler_alias : 8;
} MsgRawPolarLong;

typedef struct
{
  uint8_t range_msb;
  //uint8_t ds:1;
  uint8_t doppler_velocity_msb : 4;
  uint8_t range_lsb : 4;
  
  
  uint8_t bearing_msb : 2;
  uint8_t doppler_velocity_lsb : 6;
  //uint8_t bs:1;
  
  
  uint8_t bearing_lsb : 8;

  uint8_t track_id : 4;
  uint8_t quality : 4;
  
  uint8_t sensor_nr : 4;
  uint8_t msg_counter : 4;
  
  uint8_t obj_type : 4;
  uint8_t target_format_type : 4;

  uint8_t : 8;
} MsgTargetPolarLong;

enum
{
  // define can id enum
  ID_SYNC_MESSAGE             = 0x100,
  ID_COMMAND_SENSOR_1         = 0x201,
  ID_COMMAND_SENSOR_2         = 0x202,
  ID_COMMAND_SENSOR_3         = 0x203,
  ID_COMMAND_SENSOR_4         = 0x204,
  ID_TARGET_LOWER             = 0x300,
  ID_TARGET_UPPER             = 0x37F,
  ID_MEAS_LOWER               = 0x380,
  ID_MEAS_UPPER               = 0x381,
  ID_ERR_MANAGEMENT           = 0X3FF,
  ID_STATUS_MESSAGE           = 0X400,
  // defines different target types
  TYPE_TARGET_POLAR_SHORT     = 0x1,
  TYPE_RAW_POLAR_SHORT        = 0x2,
  TYPE_TARGET_CARTESIAN       = 0x3,
  TYPE_TARGET_CARTESIAN_MID   = 0x4,
  TYPE_TARGET_CARTESIAN_MUL   = 0x5,
  TYPE_FREESPACE_SEGMENTS     = 0x6,
  TYPE_RAW_POLAR_LONG         = 0x7,
  TYPE_TARGET_POLAR_LONG      = 0x8,
  // define different sensor modes
  MODE_SENSOR_RESET           = 0,
  MODE_SENSOR_LONG            = 2,
  MODE_SENSOR_SHORT           = 4,
  MODE_SENSOR_BLIND           = 5
};

}
#endif 
