#include <stdio.h>
#include <stdlib.h>

int globalVar1 = 1;
int globalVar2 = 2;
int globalVar3 = 3;

void proof(int level) {
  int *mallocVar = malloc(sizeof(int));
  printf("mallocVar level %d: %p\n", level, mallocVar);
  printf("localVar level %d: %p\n", level, &level);
  if (level < 3) {
    proof(level + 1);
  }
}

int main() {
  printf("globalVar1: %p\n", &globalVar1);
  printf("globalVar2: %p\n", &globalVar2);
  printf("globalVar3: %p\n", &globalVar3);
  proof(0);
  return 0;
}
