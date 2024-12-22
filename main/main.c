#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    printf("Hello, ESP32!\n");
    while (true)
    {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

//#define WIFI_SSID "MOVISTAR-WIFI6-E8E0"
//#define WIFI_PASSWORD "Tere1357"
//#define WIFI_SSID "GASTONN"
//#define WIFI_PASSWORD "gastonmaletta925"
