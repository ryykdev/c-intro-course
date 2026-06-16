#include "leap.h"

bool leap_year(int year) {
  // true - if divisible by 4
  //
  // but if divisible by 100 only if divisible by 400
  if (year % 100 == 0 && year % 400 == 0) {
    return true;
  } else if (year % 100 == 0 && year % 400 != 0) {
    return false;
  } else if (year % 4 == 0) {
    return true;
  } else
    return false;
}
