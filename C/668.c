#include <stdio.h>
#include <math.h>

long int s = 0;

#define MIL 10000000000
#define max(num, div) (num > div ? num : div)
#define foo(i) ((maxdiv(i) < sqrt(i)) ? 1 : 0)
#define bar(i, s) (!(i % 100000) ? printf("%li - %li (%lf)\n", i, s, ((double)i/MIL) * 100) : 0)

void checkSmooth(long int top);
int maxdiv(long int n);
int prime(long int n);

int main() {

  checkSmooth(10000000000);
  printf("Sum: %li\n", s + 1);

  return 0;
}
  
int maxdiv(long int n){ 
  int div = 0;
  
  while (!(n & 1)) {
    n = n >> 1;
    div = 2;
  }
  
  int size = 1 + (int)sqrt((double)n);
  for(int i = 3; i < size; i+=2){
    while(n % i == 0) {
      div = i;
      n = n / i;
    }
  }
  return max(n, div);
}
  
  
void checkSmooth(long int top) {
  for(long int i = 3; i <= top; i++){
    s += prime(i) ? 0 : foo(i); bar(i, s);
  }
}

int prime(long int n) {
  if(n == 2 || n == 3) {
    return 1;
  } else if(!(n&1) || n % 3 == 0){
    return 0;
  }

  for(int i = 5, j = 2; i * i <= n; i+=j, j = 6 - j) {
    if(n % i == 0) {
      return 0;
    }
  }
  return 1;
} 
