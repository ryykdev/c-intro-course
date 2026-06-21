#include "darts.h"
#include <stdint.h>

uint8_t score(coordinate_t coords) {
  //
  float distance = hypot(0.F - coords.x, 0.F - coords.y);
  if (distance <= 1)
    return 10;
  else if (distance <= 5)
    return 5;
  else if (distance <= 10)
    return 1;
  else
    return 0;
}
