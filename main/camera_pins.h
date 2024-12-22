#ifndef CAMERA_PINS_H
#define CAMERA_PINS_H

#include "esp_camera.h"

static camera_config_t camera_config = {
    .pin_pwdn       = GPIO_NUM_NC,   // No conectado
    .pin_reset      = GPIO_NUM_NC,   // No conectado
    .pin_xclk       = GPIO_NUM_0,    // Pin de reloj
    .pin_siod       = GPIO_NUM_26,   // SDA
    .pin_sioc       = GPIO_NUM_27,   // SCL
    .pin_d0         = GPIO_NUM_5,    // D0
    .pin_d1         = GPIO_NUM_18,   // D1
    .pin_d2         = GPIO_NUM_19,   // D2
    .pin_d3         = GPIO_NUM_21,   // D3
    .pin_d4         = GPIO_NUM_36,   // D4
    .pin_d5         = GPIO_NUM_39,   // D5
    .pin_d6         = GPIO_NUM_34,   // D6
    .pin_d7         = GPIO_NUM_35,   // D7
    .pin_vsync      = GPIO_NUM_25,   // VSYNC
    .pin_href       = GPIO_NUM_23,   // HREF
    .pin_pclk       = GPIO_NUM_22,   // PCLK
    .xclk_freq_hz   = 20000000,      // Frecuencia del reloj de la cámara
    .ledc_timer     = LEDC_TIMER_0,  // Temporizador para el LED
    .ledc_channel   = LEDC_CHANNEL_0,
    .pixel_format   = PIXFORMAT_JPEG, // Formato de imagen
    .frame_size     = FRAMESIZE_SVGA, // Tamaño del fotograma
    .jpeg_quality   = 12,            // Calidad JPEG
    .fb_count       = 2,             // Número de búferes de fotograma
};

#endif // CAMERA_PINS_H
