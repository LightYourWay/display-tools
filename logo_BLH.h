/* File 'EA_Arduino.BMP' as include

 the array starts with a 2 byte header:
  1th Byte: Width of image in dots
  2th Byte: Height of image in dots
  After that image data will follow */

#define EA_LOGO_LEN  209

#include "stm32f4xx_hal.h"

const uint8_t ea_logo[EA_LOGO_LEN] =
{
   69, 24,
  240,248,248,248,248,248,248,248,248,248,248,248,240,  0,  0,  0,
    0,  0,  0,192,240,248,248,248,248,240,192,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,124,  4,  4,124,  4,  4,120,  0, 56, 84,
   84, 88,  0, 56, 84, 84, 88,  0,  4,127, 68,  0, 72, 84, 84, 36,
    0,  0,  0,  0,  0,255,255,255,255,255,255,125,125,125,125, 57,
    1,  0,  0,  0,128,224,252,255,255,255,255,159,159,255,255,255,
  255,252,224,128,  0,  0,  0,224,248,252, 30, 14,  7,135,135,135,
  135,135,  7, 14, 30, 60,120,240,224,240,120, 60, 30, 14,135,135,
  231,231,135,135,  7, 14, 30,252,248,224, 31, 63, 63, 63, 63, 63,
   63, 63, 63, 63, 63, 63, 30,  0, 30, 63, 63, 63, 63, 31, 15, 15,
   15, 15, 15, 15, 31, 63, 63, 63, 63, 30,  0,  0,  3, 31, 63,124,
  112,224,225,225,225,225,225,224,112,120, 60, 30, 15,  7, 15, 30,
   60,120,112,225,225,231,231,225,225,240,112,120, 63, 31,  7
};
