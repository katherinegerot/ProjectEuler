#include <stdio.h>
#include <stdlib.h>

int primes[150000];

int prime(int n, int found);

int main(void) {
  long int sum = 2;
  int n = 1;
  primes[0] = 2;
  for (int i = 2; i < 2000000; i++) {
    if(prime(i, n) == 1) {
      sum += i;
      primes[n] = i;
      n++;
    }

  }
  printf("SUM: %li\n", sum);
  return 0;
}

int prime(int n, int found) {
  for(int i = 0; i < found; i++) {
    if(n%primes[i]==0) {
      return 0;
    }
  }
  return 1;
}
