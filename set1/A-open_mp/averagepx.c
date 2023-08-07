#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_THREADS 100
int main(int argc, char *argv[]) {
  int sum = 0, n = 0;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int *localSum = calloc(MAX_THREADS, sizeof(int));
#pragma omp parallel
  {
    int threadID = omp_get_thread_num();
    int numThread = omp_get_num_threads();
    int chunkSize = n / numThread;
    int start, end;
    if (threadID == 0) {
      start = 0;
      end = chunkSize;
    } else if (threadID == numThread - 1) {
      start = threadID * chunkSize;
      end = n;
    } else {
      start = threadID * chunkSize;
      end = start + chunkSize;
    }
    for (int i = start; i < end; i++) {
      localSum[threadID] += a[i];
    }
  }
  for (int i = 0; i < MAX_THREADS; i++) {
    sum += localSum[i];
  }
  free(localSum);
  printf("%d\n", sum / n);
  return 0;
}
