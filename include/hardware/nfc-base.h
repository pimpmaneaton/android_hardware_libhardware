// This file is autogenerated by hidl-gen. Do not edit manually.

#ifndef HIDL_GENERATED_android_hardware_nfc_V1_0__EXPORTED_CONSTANTS_H_
#define HIDL_GENERATED_android_hardware_nfc_V1_0__EXPORTED_CONSTANTS_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
    HAL_NFC_OPEN_CPLT_EVT = 0,
    HAL_NFC_CLOSE_CPLT_EVT = 1,
    HAL_NFC_POST_INIT_CPLT_EVT = 2,
    HAL_NFC_PRE_DISCOVER_CPLT_EVT = 3,
    HAL_NFC_REQUEST_CONTROL_EVT = 4,
    HAL_NFC_RELEASE_CONTROL_EVT = 5,
    HAL_NFC_ERROR_EVT = 6,
};

enum {
    HAL_NFC_STATUS_OK = 0,
    HAL_NFC_STATUS_FAILED = 1,
    HAL_NFC_STATUS_ERR_TRANSPORT = 2,
    HAL_NFC_STATUS_ERR_CMD_TIMEOUT = 3,
    HAL_NFC_STATUS_REFUSED = 4,
};

#ifdef __cplusplus
}
#endif

#endif  // HIDL_GENERATED_android_hardware_nfc_V1_0__EXPORTED_CONSTANTS_H_
