#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  FILE *fptr = fopen("set1DIO.txt", "w");
  int iterations = atoi(argv[1]);
  if (fptr == NULL) {
    printf("Error!");
    return 1;
  }
  for (int i = 0; i < iterations; i++) {
    fprintf(fptr, "%d", i);
  }
  fclose(fptr);
  remove("set1DIO.txt");
  return 0;
}
