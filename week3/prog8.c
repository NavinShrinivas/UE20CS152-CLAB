#include<stdio.h>
int main() {
  int a, b, c;
  printf("Enter the three angles of the triangle :");
  scanf("%i %i %i", & a, & b, & c);
  if (a + b + c == 180)
    printf("Triagle is valid!");
  else
    printf("Triangle is not valid");
}