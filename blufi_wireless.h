#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include "freertos/event_groups.h"

    extern EventGroupHandle_t wifi_event_group;
    extern const int CONNECTED_BIT;

    esp_err_t blufi_initialise_wifi(bool ignore_existing_settings);
    void blufi_init();

#ifdef __cplusplus
}
#endif