#include <stdio.h>
#include <math.h>

int arr[302];

double power(int base, int exp);
int sum(double num);

int main(void) {
  
  double n = pow(2, 1000);
  sum(10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376.0);
  printf("%.lf", n);

  return 0;
}

int sum(double num) {
  double n = num;
  int d = log10(num) + 1;
  int s = 0;
  double div = pow(10, d);
  printf("%d\n%lf\n", d,div);
  while(floor(n) > 0) {
    
  }
  printf("%d\n", s);
  return s;
}
