#include<stdio.h>
#include "2_1.h"

int ncr(int n,int r)
{
    if(n<r)
    {
        printf("Invalid values!");
        return 0;
    }
    return factorial(n)/(factorial(r)*factorial(n-r));

}