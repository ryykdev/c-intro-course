#include "collatz_conjecture.h"

int steps(int number) {
  if (number <= 0)
    return -1;

  int stp = 0;
  while (number != 1) {
    //
    if (number % 2 == 0) {
      number = number / 2;
      stp += 1;
    } else {
      //
      number = (number * 3) + 1;
      stp += 1;
    }
  }

  return stp;
}
