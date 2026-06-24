#include "space_age.h"

float age(planet_t planet, int64_t seconds) {

  float earth_year_secs = 31557600;

  switch (planet) {
  case MERCURY:
    return seconds / earth_year_secs / 0.2408467f;
    break;
  case VENUS:
    return seconds / earth_year_secs / 0.61519726f;
    break;
  case EARTH:
    return seconds / earth_year_secs / 1.0f;
    break;
  case MARS:
    return seconds / earth_year_secs / 1.8808158f;
    break;
  case JUPITER:
    return seconds / earth_year_secs / 11.862615f;
    break;
  case SATURN:
    return seconds / earth_year_secs / 29.447498f;
    break;
  case URANUS:
    return seconds / earth_year_secs / 84.016846f;
    break;
  case NEPTUNE:
    return seconds / earth_year_secs / 164.79132f;
    break;
  default:
    return -1.0;
    break;
  }
  return -1.0;
}
