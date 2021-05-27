#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include"1_1.h"

int main(){
    int n;
    printf("Enter number of elements : ");
    scanf("%i",&n);
    int a[n];
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
        scanf("%i",a+i);
    pointerreverse(a,n);
    indexreverse(a,n);
}