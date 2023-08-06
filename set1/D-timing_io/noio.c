#include <stdio.h>

void doNothing(int i) {
  if (i == -1)
    return;
  doNothing(-1);
  ;
}

int main() {
  for (int i = 0; i < 123456789; i++) {
    doNothing(i);
  }
  return 0;
}
