#include<stdio.h>


int c = 0;
void recurseoctal(int * n, int rems[]) {
  if ( * n < 8) {
    rems[c] = * n;
    c++;

  } else {
    rems[c] = * n % 8;
    c++;
    * n /= 8;
    recurseoctal(n, rems);
  }
}

int main() {
  int n;
  printf("Enter a number[BASE 10] :");
  scanf("%i", & n);
  int copy = n;
  int rems[1000000];
  recurseoctal( & n, rems);
  printf("%i in octal [BASE 8] :", copy);
  for (int i = c - 1; i >= 0; i--)
    printf("%i", rems[i]);
}