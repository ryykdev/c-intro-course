#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H
#include <stddef.h>
#include <stdint.h>

#define COLOR_LIST(X)                                                          \
  X(BLACK)                                                                     \
  X(BROWN)                                                                     \
  X(RED)                                                                       \
  X(ORANGE)                                                                    \
  X(YELLOW)                                                                    \
  X(GREEN)                                                                     \
  X(BLUE)                                                                      \
  X(VIOLET)                                                                    \
  X(GREY)                                                                      \
  X(WHITE)

#define AS_ENUM(NAME) NAME,
typedef enum { COLOR_LIST(AS_ENUM) COLOR_COUNT } resistor_band_t;

// resistor color due is a fixed sized array len with 2
uint16_t color_code(const resistor_band_t *bands);

uint16_t get_single(resistor_band_t color);

#endif
