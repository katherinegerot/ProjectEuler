#include <stdio.h>
#include <math.h>

int div(int n);

int main(void) {
  int d = 0;
  long int t = 0;
  long int g[3] = {0, 0, 0};

  for(int i = 500; d <= 800; i++) {
    t+=i;
    d = div(t);
    if(d >= 450) {
      printf("%d:\t%d - %li\n", i, d, t);
    }
      if(d > g[2]) {
      g[0] = i;
      g[1] = t;
      g[2] = d;
    }
  }
  return 0;
}

int div(int n) {
  int sum = 0;
  for(int i = 1; i < sqrt(n); i++) {
    if(n % i == 0) {
      sum++;
      if(i != n/i) {
        sum++;
      }
    }
  }

  return sum;
}
