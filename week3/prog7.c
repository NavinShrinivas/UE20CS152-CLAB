#include<stdio.h>

int main() {
  int first = 0;
  int second = 1;
  int n;
  printf("Enter range for fibbonaci :");
  scanf("%i", & n);
  printf("%i ", first);
  while (second <= n) {
    printf("%i ", second);
    int temp = first;
    first = second;
    second = temp + second;
  }

}