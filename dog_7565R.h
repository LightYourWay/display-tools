/*
 * Copyright (c) 2014 by ELECTRONIC ASSEMBLY <technik@lcd-module.de>
 * EA DOG Graphic (ST7565R) software library for arduino.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License version 2
 * or the GNU Lesser General Public License version 2.1, both as
 * published by the Free Software Foundation.
 * 
 * MODIFIED by Lukas Runge (2021) to support STM32
 * 
 * DISCLAIMER: Uses generalized gpio and spi librarys also avaliable from GitHub.
 *             Those need to be installed alongside this library to make it work.
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DOG_7565R_H__
#define __DOG_7565R_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "gpio_api.h"
#include "spi_api.h"

  // Compatibility to Arduino.h
  typedef bool boolean;
  typedef uint8_t byte;

#define DOGM128 1
#define DOGL128 2
#define DOGM132 3

#define VIEW_BOTTOM 0xC0
#define VIEW_TOP 0xC8

  class dog_7565R
  {
  public:
    void initialize(spi_api *spi, gpio_api *port_a0, int pin_a0, byte type);
    void clear(void);
    void contrast(byte contr);
    void view(byte direction);
    void string(byte column, byte page, const uint8_t font_adress[], const char *str);
    void rectangle(byte start_column, byte start_page, byte end_column, byte end_page, byte pattern);
    void picture(byte column, byte page, const uint8_t pic_adress[]);

  private:
    gpio_api *port_a0;
    int pin_a0;

    spi_api *spi;

    byte type;
    boolean top_view;

    void position(byte column, byte page);
    void command(byte dat);
    void data(byte dat);

    void spi_initialize();
    void spi_put_byte(byte dat);
    void spi_put(byte *dat, int len);
    void spi_out(byte dat);
  };

#ifdef __cplusplus
}
#endif

#endif /* __DOG_7565R_H__ */