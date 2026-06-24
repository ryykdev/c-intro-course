#include "resistor_color_duo.h"
#include <stdint.h>

uint16_t get_single(resistor_band_t color) {
  switch (color) {
  case BLACK:
    return 0;
  case BROWN:
    return 1;
  case RED:
    return 2;
  case ORANGE:
    return 3;
  case YELLOW:
    return 4;
  case GREEN:
    return 5;
  case BLUE:
    return 6;
  case VIOLET:
    return 7;
  case GREY:
    return 8;
  case WHITE:
    return 9;
  default:
    return 100;
  }
}

uint16_t color_code(const resistor_band_t *bands) {
  //
  uint16_t value = (bands[0] * 10) + bands[1];

  return value;
}
