#include<stdio.h>

#include<stdbool.h>

void recurseperfect(int * copy, int n, int * sum) {
  if (n == 1) {
    * sum + 1;
    return;
  }

  if ( * copy % n == 0)
    *
    sum = * sum + n;
  recurseperfect(copy, n - 1, sum);
}
bool armstrong(int n) {
  int sum = 0;
  int copy = n;
  while (n != 0) {
    sum += (n % 10) * (n % 10) * (n % 10);
    n /= 10;
  }
  if (sum == copy)
    return true;
  else {
    return false;
  }
}
int main() {
  int n;
  int sum = 0;
  printf("Enter a number :");
  scanf("%i", & n);
  recurseperfect( & n, n - 1, & sum);
  sum++;
  if (armstrong(n))
    printf("%i is is a armstrong number!\n", n);
  else
    printf("%i is is a not a armstrong number!\n", n);

  if (sum == n)
    printf("%i is is a perfect number!", sum);
  else
    printf("%i is not a perfect number!", n);
}