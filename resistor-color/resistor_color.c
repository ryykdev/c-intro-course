#include "resistor_color.h"

#define AS_ARRAY(NAME) NAME,
static const resistor_band_t ALL_COLORS[] = {COLOR_LIST(AS_ARRAY)};

int color_code(resistor_band_t color) {
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
    return -1;
  }
}

const resistor_band_t *colors(void) { return ALL_COLORS; }
