#include <stdio.h>
#include <time.h>
#include <math.h>

int found = 0;

int prime(int n); // returns: 0 if false & 1 if true

int main() {

  clock_t begin, end;
  double time_spent;

  begin = clock();
  time_spent = (double)begin / CLOCKS_PER_SEC;

  for(int i = 2; found < 10010; i++){
    if(prime(i) == 1) {
      found++;
      if(found == 10001) {
        printf("%d\n", i);
      }
    }
  }

  end = clock();
  time_spent = (double)(end - begin) / CLOCKS_PER_SEC; 
  printf("ELAPSED: %lf\n", time_spent);
  return 0;
}


int prime(int n) {
  for(int i = 2; i < sqrt(n); i++) {
    if(n%i==0) {
      return 0;
    }
  }

  return 1;
}
