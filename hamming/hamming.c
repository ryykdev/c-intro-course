#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs) {
  // differences
  int diffs = 0;
  // same len check
  if (strlen(lhs) == strlen(rhs)) {
    for (size_t i = 0; i < strlen(lhs); i++) {
      // compare each char in sequence
      if (lhs[i] != rhs[i]) {
        diffs += 1;
      }
    }
    return diffs;
  }

  return -1;
}
