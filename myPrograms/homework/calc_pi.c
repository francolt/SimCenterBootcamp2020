#include<stdio.h>
#include <time.h>
static int long numSteps = 100000;

int main() {
  double pi=0; double time = 0; double var = 0; double x = 0;
  clock_t begin = clock();

  for (int i=0; i<numSteps; i++){
    var = var + i/numSteps;
    x = (var + var + i/numSteps)/2;  
    pi = pi + 4.0 / (1.0 + x*x)*(1/numSteps);
      }
  clock_t end = clock();
  time += (double)(end - begin) / CLOCKS_PER_SEC;
  printf("PI=%f, duration:%f ms\n", pi, time);
  return 0;
}
