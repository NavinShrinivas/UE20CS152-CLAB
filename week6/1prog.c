#include<stdio.h>

int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%i",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0)
                *(*(a+i)+j)=1;
            else if(j>i) 
                *(*(a+i)+j)=0;
            else if(j>=i)
                *(*(a+i)+j)=1;
            else    
                *(*(a+i)+j)=*(*(a+i-1)+j)+*(*(a+i-1)+j-1);;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(*(*(a+i)+j)!=0)
                printf("%i",*(*(a+i)+j));
        }
        printf("\n");
    }
}