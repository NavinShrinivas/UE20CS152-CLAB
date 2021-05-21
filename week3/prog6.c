#include<stdio.h>


int recursefactorial(int n) {
  if (n == 1)
    return 1;
  else
    return n * recursefactorial(n - 1);
}
int main() {
  int sum = 0;
  for (int i = 1; i <= 5; i++) {
    sum += recursefactorial(i) / i;
  }
  printf("sum of the requrired series is :%i", sum);
}