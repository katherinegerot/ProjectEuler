#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int checkPyt(int a, int b, int c);

int main(void) {
  
  for(int i = 1; i < 500; i++) {
    for (int j = i + 1; j < 500; j++) {
      for (int k = j + 1; k < 500; k++) {
        if(checkPyt(i, j, k) == 1) {
          printf("--------- %d --------- \n", i * j * k);
        }
      }
    }
    printf("--------------------\n");
  }

  return 0;
}



int checkPyt(int a, int b, int c) {
    if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
      printf("%d\t\t%d\t\t%d\n", a, b, c);
      if(a + b + c == 1000) {
        printf("\t\t\t\t\t\t Yay \t\t\t\t\t\t\t\n\n\n\n");
        return 1;
      }
    }
  return 0;
}
