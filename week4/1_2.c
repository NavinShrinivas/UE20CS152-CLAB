#include<stdio.h>
#include<stdbool.h>
#include<math.h>
void pointerreverse(int a[],int n){
    int* right=(a+n-1);
    printf("Reversed array[Using Pointer]:");
    for(int i=0;i<n;i++)
    {
        printf("%i ",*(right-i));
    }
    printf("\n");
}