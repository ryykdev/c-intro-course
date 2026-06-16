#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

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

int color_code(resistor_band_t color);

const resistor_band_t *colors(void);

#endif
