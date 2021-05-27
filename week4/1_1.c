#include<stdio.h>
#include<stdbool.h>
#include<math.h>
void indexreverse(int a[],int n){
    printf("Reversed array[Using Index]:");
    for(int i=0;i<n;i++)
    {
        printf("%i ",a[n-i-1]);
    }
    printf("\n");
}