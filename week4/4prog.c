#include<stdio.h>
#include "4_1.h"
int main(){
    int b,p;
    printf("Enter base and power : ");
    scanf("%i %i",&b,&p);
    printf("Value of %i to the power %i is : %i",b,p,power(b,p));
}