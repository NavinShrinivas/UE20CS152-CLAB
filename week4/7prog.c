#include<stdio.h>
#include"7_1.h"

int main(){
    int n;
    printf("Enter number of fibbonaci to populate : ");
    scanf("%i",&n);
    int a[n];
    populatefibbonaci(a,n);
    printf("Generated fibbonaci series is : \n");
    for(int i=0;i<n;i++)
    {
        printf("%i ",a[i]);
    }
}