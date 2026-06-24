#include "binary.h"
#include "math.h"
#include "stdint.h"
#include "string.h"

int convert(const char *input) {
  //
  int decimal = 0;
  size_t len = strlen(input);
  // reverse iter 5 <-> 101
  for (size_t i = 0; i < len; i++) {
    //
    if (input[i] == '1') {
      decimal += (int)pow(2, len - i - 1); // 4 + 0 + 1
    } else if (input[i] == '0') {
      continue;
    } else {
      return -1;
    }
  }

  return decimal;
}
