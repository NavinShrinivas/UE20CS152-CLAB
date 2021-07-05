#include<stdio.h>
#include <stdlib.h>
#include<string.h>

void swap(char* a[1][2],int b,int c)
{
    char* temp = a[b][0];
    a[b][0]=a[c][0];
    a[c][0]=temp;
    temp=a[b][1];
    a[b][1]=a[c][1];
    a[c][1]=temp;
}
void bubbleroll(int n;char* a[n][2]  , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(atoi(a[j][0])>atoi(a[j+1][0]))
            {
                swap(a,j,j+1);
            }
        }
    }
}
void bubblename(int n;char* a[n][2]  , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(a[j][1],a[j+1][1])>0)
            {
                swap(a,j,j+1);
            }
        }
    }
}

void csvsort(int n;void (*func)(int n;char* a[n][2]  , int n),char* a[n][2], int n)
{   
    func(a,n);
}
int main(){
    FILE* f=fopen("4file.csv","r");
    char data[1000];
    fscanf(f,"%[^NULL]%*c",data);
    char* split=data;
    char* token1=strtok(split,"\n");
    char* raw1[100];
    int z=0;
    while(token1!=NULL)
    {
        raw1[z]=token1;
        token1=strtok(NULL,"\n");
        z++;
    }
    char* raw2[100][2];
    int i=0;
    while(i<z)
    {
        char* token2=strtok(raw1[i],",");
        raw2[i][0]=token2;
        token2=strtok(NULL,",");
        raw2[i][1]=token2;
        i++;
    }
    int flag=1;
    while(flag)
    {
        int choice;
        printf("0.Exit \n");
        printf("1.Sort byroll No.\n");
        printf("2.Sort by name \n");
        printf("3.List contents of the file\n");
        printf("Enter your option :");
        scanf("%d",&choice);
        if(choice==0)
            return 0;
        else if(choice == 1)
        {
            char* copy[100][2];
            for(int c=0;c<i;c++)
            {
                copy[c][0]=raw2[c][0];
                copy[c][1]=raw2[c][1];
            }
            csvsort(bubbleroll,copy,i);
            printf("List after sorting by roll number : \n");
            for(int c=0;c<i;c++)
            {
                printf("%s %s\n",*(*(copy+c)+0),*(*(copy+c)+1));
            }
        }
        else if(choice == 2)
        {
            char* copy[100][2];
            for(int c=0;c<i;c++)
            {
                copy[c][0]=raw2[c][0];
                copy[c][1]=raw2[c][1];
            }
            csvsort(bubblename,copy,i);
            printf("List after sorting by name : \n");
            for(int c=0;c<i;c++)
            {
                printf("%s %s\n",*(*(copy+c)+0),*(*(copy+c)+1));
            }
        }
        else if(choice == 3)
        {
            for(int c=0;c<i;c++)
            {
                printf("%s %s\n",*(*(raw2+c)+0),*(*(raw2+c)+1));
            }
        }

    }
}
