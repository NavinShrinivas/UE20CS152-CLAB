#include<stdio.h>
int main(){
    int n,m;
    printf("Enter value of m : ");
    scanf("%i",&m);
    printf("Enter value of n : ");
    scanf("%i",&n);
    int a[m][n];
    printf("Enter values of the array [%ix%i] from left to right top to bottom : \n",m,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%i",*(a+i)+j);
    }
    int flag=1;
    if(n!=m)
        flag=0;
    else
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                if(*(*(a+i)+j)!=*(*(a+j)+i))
                    flag=0;
            }
        }
    }
    if(flag)
        printf("The given matrix is symmetric : \n");
    else
        printf("Given matrix is not symmetric : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%i",*(*(a+i)+j));
            printf(" ");
        }
        printf("\n");
    }
}