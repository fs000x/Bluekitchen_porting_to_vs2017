
// E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\nordic_spp_le_streamer.h generated from E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\nordic_spp_le_streamer.gatt for BTstack
// it needs to be regenerated when the .gatt file is updated. 

// To generate E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\nordic_spp_le_streamer.h:
// ..\tool\compile_gatt.py E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\nordic_spp_le_streamer.gatt E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\nordic_spp_le_streamer.h

// att db format version 1

// binary attribute representation:
// - size in bytes (16), flags(16), handle (16), uuid (16/128), value(...)

#include <stdint.h>

const uint8_t profile_data[] =
{
    // ATT DB Version
    1,

    // 0x0001 PRIMARY_SERVICE-GAP_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x28, 0x00, 0x18, 
    // 0x0002 CHARACTERISTIC-GAP_DEVICE_NAME-READ
    0x0d, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x28, 0x02, 0x03, 0x00, 0x00, 0x2a, 
    // 0x0003 VALUE-GAP_DEVICE_NAME-READ-'Nordic SPP Streamer'
    // READ_ANYBODY
    0x1b, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x2a, 0x4e, 0x6f, 0x72, 0x64, 0x69, 0x63, 0x20, 0x53, 0x50, 0x50, 0x20, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x65, 0x72, 
    // #import <nordic_spp_service.gatt> -- BEGIN
    // Specification Nordic SPP-like profile
    // Nordic SPP-like

    // 0x0004 PRIMARY_SERVICE-6E400001-B5A3-F393-E0A9-E50E24DCCA9E
    0x18, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00, 0x28, 0x9e, 0xca, 0xdc, 0x24, 0x0e, 0xe5, 0xa9, 0xe0, 0x93, 0xf3, 0xa3, 0xb5, 0x01, 0x00, 0x40, 0x6e, 
    // 0x0005 CHARACTERISTIC-6E400002-B5A3-F393-E0A9-E50E24DCCA9E-DYNAMIC | WRITE | WRITE_WITHOUT_RESPONSE
    0x1b, 0x00, 0x02, 0x00, 0x05, 0x00, 0x03, 0x28, 0x0c, 0x06, 0x00, 0x9e, 0xca, 0xdc, 0x24, 0x0e, 0xe5, 0xa9, 0xe0, 0x93, 0xf3, 0xa3, 0xb5, 0x02, 0x00, 0x40, 0x6e, 
    // 0x0006 VALUE-6E400002-B5A3-F393-E0A9-E50E24DCCA9E-DYNAMIC | WRITE | WRITE_WITHOUT_RESPONSE-''
    // WRITE_ANYBODY
    0x16, 0x00, 0x0c, 0x03, 0x06, 0x00, 0x9e, 0xca, 0xdc, 0x24, 0x0e, 0xe5, 0xa9, 0xe0, 0x93, 0xf3, 0xa3, 0xb5, 0x02, 0x00, 0x40, 0x6e, 
    // 0x0007 CHARACTERISTIC-6E400003-B5A3-F393-E0A9-E50E24DCCA9E-DYNAMIC | NOTIFY
    0x1b, 0x00, 0x02, 0x00, 0x07, 0x00, 0x03, 0x28, 0x10, 0x08, 0x00, 0x9e, 0xca, 0xdc, 0x24, 0x0e, 0xe5, 0xa9, 0xe0, 0x93, 0xf3, 0xa3, 0xb5, 0x03, 0x00, 0x40, 0x6e, 
    // 0x0008 VALUE-6E400003-B5A3-F393-E0A9-E50E24DCCA9E-DYNAMIC | NOTIFY-''
    // 
    0x16, 0x00, 0x00, 0x03, 0x08, 0x00, 0x9e, 0xca, 0xdc, 0x24, 0x0e, 0xe5, 0xa9, 0xe0, 0x93, 0xf3, 0xa3, 0xb5, 0x03, 0x00, 0x40, 0x6e, 
    // 0x0009 CLIENT_CHARACTERISTIC_CONFIGURATION
    // READ_ANYBODY, WRITE_ANYBODY
    0x0a, 0x00, 0x0e, 0x01, 0x09, 0x00, 0x02, 0x29, 0x00, 0x00, 
    // #import <nordic_spp_service.gatt> -- END

    // END
    0x00, 0x00, 
}; // total size 103 bytes 


//
// list service handle ranges
//
#define ATT_SERVICE_GAP_SERVICE_START_HANDLE 0x0001
#define ATT_SERVICE_GAP_SERVICE_END_HANDLE 0x0003
#define ATT_SERVICE_6E400001_B5A3_F393_E0A9_E50E24DCCA9E_START_HANDLE 0x0004
#define ATT_SERVICE_6E400001_B5A3_F393_E0A9_E50E24DCCA9E_END_HANDLE 0x0009

//
// list mapping between characteristics and handles
//
#define ATT_CHARACTERISTIC_GAP_DEVICE_NAME_01_VALUE_HANDLE 0x0003
#define ATT_CHARACTERISTIC_6E400002_B5A3_F393_E0A9_E50E24DCCA9E_01_VALUE_HANDLE 0x0006
#define ATT_CHARACTERISTIC_6E400003_B5A3_F393_E0A9_E50E24DCCA9E_01_VALUE_HANDLE 0x0008
#define ATT_CHARACTERISTIC_6E400003_B5A3_F393_E0A9_E50E24DCCA9E_01_CLIENT_CONFIGURATION_HANDLE 0x0009
