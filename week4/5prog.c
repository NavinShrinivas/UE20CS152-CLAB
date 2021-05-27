#include<stdio.h>
#include<stdbool.h>
#include"5_1.h"

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%i",&n);
    if(isprime(n))
        printf("Yes!%i is a prime \n",n);
    else 
        printf("No!%i is not a prime \n",n);
    printf("Next prime number found is : %i",nextprime(n));
}