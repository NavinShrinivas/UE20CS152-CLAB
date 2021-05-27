//this solution is a O(k)solution compared to the O(n^2) basic solution
//where k is the largest element value
#include<stdio.h>

int main(){
    int n;
    printf("Enter number of elements :");
    scanf("%i",&n);
    int a[n];
    int largest=-2147483647;
    printf("Enter the elements :\n ");
    for(int i=0;i<n;i++)
    {
        printf("\t Element %i : ",i+1);
        scanf("%i",a+i);
        if(a[i]>largest)
            largest=a[i];
    }
    int fakemap[largest+1];
    for(int i=0;i<=largest;i++)
    {
        fakemap[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        fakemap[*(a+i)]++;
    }
    printf("Unique element(s) in the array :");
    for(int i=0;i<=largest;i++)
    {
        if(fakemap[i]==1)
            printf("%i ",i);
    }
    printf("\n");
}