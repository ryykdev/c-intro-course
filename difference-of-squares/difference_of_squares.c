#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int number) {

  unsigned int sum = 0;
  for (unsigned int i = 0; i <= number; i++) {
    sum += i;
  }
  return sum * sum;
}

unsigned int sum_of_squares(unsigned int number) {
  unsigned int sum = 0;
  for (unsigned int i = 0; i <= number; i++) {
    sum += i * i;
  }
  return sum;
}

unsigned int difference_of_squares(unsigned int number) {
  unsigned int sum1 = square_of_sum(number);
  unsigned int sum2 = sum_of_squares(number);

  unsigned int difference = sum1 - sum2;

  return difference;
}
