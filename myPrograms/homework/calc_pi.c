#include<stdio.h>
#include <time.h>
static int long numSteps = 100000;

int main() {
  double pi=0; double time = 0; double stepx = 1./numSteps; double x = stepx*0.5;
  clock_t begin = clock();

  for (int i=0; i<numSteps; i++){
    pi +=4./(1+x*x);
    x += stepx;
    }

  pi *= stepx;

  clock_t end = clock();
  time += (double)(end - begin) / CLOCKS_PER_SEC;
  printf("PI=%f, duration:%f ms\n", pi, time);
  return 0;
}
