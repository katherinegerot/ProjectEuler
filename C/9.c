#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int checkPyt(int a, int b, int c);

int main(void) {
  
  for(int i = 1; i < 500; i++) {
    for (int j = i + 1; j < 500; j++) {
      for (int k = j + 1; k < 500; k++) {
        
        if(checkPyt(i, j, k) == 1) {
          printf("%d\n", i * j * k);
        }
        
      }
    }
  }

  return 0;
}

int checkPyt(int a, int b, int c) {
    if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
      if(a + b + c == 1000) {
        return 1;
      }
    }
  return 0;
}
