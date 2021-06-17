#include<stdio.h>

int main(){
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==4-j)
                *(*(a+i)+j)=0;
            else if(i<4-j) 
                *(*(a+i)+j)=1;
            else    
                *(*(a+i)+j)=-1;
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(*(*(a+i)+j)==-1)
                printf("%i",*(*(a+i)+j));
            else
                printf(" %i",*(*(a+i)+j));
        }
        printf("\n");
    }
}