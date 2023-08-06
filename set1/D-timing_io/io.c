#include <stdio.h>
int main() {
  FILE *fptr = fopen("set1DIO.txt", "w");
  if (fptr == NULL) {
    printf("Error!");
    return 1;
  }
  for (int i = 0; i < 123456789; i++) {
    fprintf(fptr, "%d", i);
  }
  fclose(fptr);
  remove("set1DIO.txt");
  return 0;
}
