#include<stdio.h>

#include<stdbool.h>

int recursegdc(int a, int b) {
  if (a == 0)
    return b;
  recursegdc(b % a, a);
}
int threegcd(int a[]) {
  int init = a[0];
  for (int i = 0; i < 3; i++) {
    init = recursegdc(a[i], init);
    if (init == 1)
      return 1;
  }
  return init;
}
int main() {
  int a[3];
  printf("Enter 3 values:");
  for (int i = 0; i < 3; i++)
    scanf("%i", a + i);
  printf("GCD(%i,%i,%i)=%i", a[0], a[1], a[2], threegcd(a));
}