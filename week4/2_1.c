#include<stdio.h>
int factorial(int n){
    if(n==1)
        return 1;
    return n*factorial(n-1);
}
int ncr(int n,int r)
{
    if(n<r)
    {
        printf("Invalid values!");
        return 0;
    }
    return factorial(n)/(factorial(r)*factorial(n-r));

}