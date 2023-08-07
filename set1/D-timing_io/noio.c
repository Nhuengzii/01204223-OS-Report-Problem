#include <stdio.h>
#include <stdlib.h>

void doNothing(int i) {
  if (i == -1)
    return;
  doNothing(-1);
  ;
}

int main(int argc, char *argv[]) {
  int iterations = atoi(argv[1]);
  for (int i = 0; i < iterations; i++) {
    doNothing(i);
  }
  return 0;
}
