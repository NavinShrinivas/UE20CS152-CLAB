#include<stdio.h>
//one does not need an array do this prgram but as the question mentions
//arrays multiple times i am using one
int main(){
    int largest=-2147483647;
    int smallest=2147483647;
    int si=0,li=0,n;
    printf("Enter number of elements : ");
    scanf("%i",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element %i : ",i+1);
        scanf("%i",a+i);
        if(a[i]>largest)
        {
            largest=a[i];
            li=i;
        }
        if(a[i]<smallest)
        {
            smallest=a[i];
            si=i;
        }
    }
    printf("Largest element is : %i \n",a[li]);
    printf("Smallest element is : %i",a[si]);
}