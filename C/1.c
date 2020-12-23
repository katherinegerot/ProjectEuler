#include <stdio.h>
#include <time.h>

int solution_one(int, int, int);
int solution_two(int, int, int);
int gcd(int, int);

int main() {
  int n = 1000;
  int a = 5;
  int b = 3;
  int result;
  
  clock_t t; 
  
  t = clock(); 
  result = solution_one(n, a, b);
  t = clock() - t;
  printf("Solution 1: Iterative method - %d\n\tsolution_one(%d, %d, %d) took %lf seconds to run\n", result, n, a, b, ((double)t)/CLOCKS_PER_SEC);
  
  t = clock(); 
  result = solution_one(n, a, b);
  t = clock() - t;
  printf("Solution 2: Mathematical method - %d\n\tsolution_two(%d, %d, %d) took %lf seconds to run\n", result, n, a, b, ((double)t)/CLOCKS_PER_SEC);
}

int solution_one(int n, int a, int b){
  int result = 0;
  for(int i = 1; i < n; i++) {
    result += (i % a == 0 || i % b == 0) ? i : 0;
  }
  return result;
}

int solution_two(int n, int a, int b)
{  
  int lcm = (a * b) / gcd(a, b);

  int greatest_multiple_a = n % a == 0 ? n - a : n - (n % a);
  int greatest_multiple_b = n % b == 0 ? n - b : n - (n % b);
  int greatest_multiple_lcm = n % lcm == 0 ? n - lcm : n - (n % lcm);
  
  int total_div_a = greatest_multiple_a / a;
  int total_div_b = greatest_multiple_b / b;
  int total_div_lcm = greatest_multiple_lcm / lcm;
  
  int sum_a = greatest_multiple_a * (total_div_a + 1)/2;
  int sum_b = greatest_multiple_b * (total_div_b + 1)/2;
  int sum_lcm = greatest_multiple_lcm * (total_div_lcm + 1)/2;
  
  return sum_a + sum_b - sum_lcm;
}

// Euclidean Algorithm
int gcd(int a, int b) 
{
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
