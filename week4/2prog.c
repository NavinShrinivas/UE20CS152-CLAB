#include"2_2.h"
#include<stdio.h>
int main(){
    int n,r;
    printf("Enter two number in the form n r to find combinations :");
    scanf("%i %i",&n,&r);
    if(ncr(n,r)!=0)
        printf("nCr(%i,%i) = %i",n,r,ncr(n,r));
}