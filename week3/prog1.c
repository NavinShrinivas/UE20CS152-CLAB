#include<stdio.h>

#include<stdbool.h>

#include<string.h>

bool reversematch(char a[]) {
  char copy[100000];
  for (int i = 0; i < strlen(a); i++) {
    copy[i] = a[strlen(a) - i - 1];
  }
  for (int i = 0; i < strlen(a); i++) {
    if (a[i] != copy[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  char c[100000];
  printf("Enter a number :");
  scanf("%[^\n]%c", c);
  if (reversematch(c))
    printf("Yes %s is a palindrome!", c);
  else
    printf("No,%s is not a palindrome!", c);
  return 0;

}