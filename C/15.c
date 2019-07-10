#include <stdio.h>
#include <time.h>

unsigned long long int path(int max, int x, int y);

int main(void) {
  clock_t begin, end;
  double time_spent;
  int SIZE = -1;

  while(1) {
    
    scanf("%d", &SIZE);
    if(SIZE == 0) {
      break;
    }

    begin = clock();
    time_spent = (double)begin / CLOCKS_PER_SEC;

    printf("%llu\n", 1 + path(SIZE, 0, 0));
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC; 
    printf("ELAPSED: %lf\n", time_spent);
  }
  
  return 0;
}

unsigned long long int path(int max, int x, int y) {
  if(x == max && y == max) {
    return 0;
  } else if(x < max && y < max){
    return 1 + path(max, x, y + 1) + path(max, x + 1, y);
  }
  return 0;
}
