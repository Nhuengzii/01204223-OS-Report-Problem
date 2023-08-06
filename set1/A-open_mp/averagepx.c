#include <omp.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int sum = 0, n = 0;
  scanf("%d", &n);
#pragma omp parallel for
  for (int i = 0; i < n; i++) {
    int r;
    scanf("%d", &r);
    sum += r;
  }
  printf("%d\n", sum / n);
  return 0;
}
