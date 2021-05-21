//if a number is not a prime atleast one of its divisor is present which is less than the root(number)

#include<stdio.h>

#include<stdbool.h>

#include<math.h>

bool checkprime(int n) {
  for (int i = sqrt(n) + 1; i > 1; i--) {
    if (n % i == 0)
      return false;
  }
  return true;
}
int main() {
  int n;
  printf("Enter a number :");
  scanf("%i", & n);
  if (checkprime(n))
    printf("The number %i is a prime", n);
  else
    printf("The number %i is not a prime", n);
}