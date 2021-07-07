#include<stdio.h>

//a-array of numbers
//n-number to be searched
//l->r is the range in which element is to be searched
int searchcall(int (*fn)(int* a,int n,int l,int r),int* a,int n,int l,int r)
{
    return fn(a,n,l,r);
}

int evensearch(int* a,int n,int l,int r)
{
    if(n%2!=0)
        return -1;    
    if(l<=r)
    {
        int center=(r+l)/2;
        if(*(a+center)==n)
            return center;
        else if(*(a+center)>n)
            evensearch(a,n,l,center);
        else
            evensearch(a,n,center+1,r);
    }
    else 
        return -1;
}
int less22search(int* a,int n,int l,int r)
{
    if(n>22)
        return -1;  
    else if(l<=r)
    {
        int center=(r+l)/2;
        if(*(a+center)==n)
            return center;
        else if(*(a+center)>n)
            less22search(a,n,l,center);
        else
            less22search(a,n,center+1,r);
    }
    else
        return -1;
}
int main()
{
    //NOTE : I implement callback without function pointer unlike what she taught in class
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);int a[n];
    printf("Enter the elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int searchnum;
    printf("Element to be searched : ");
    scanf("%d",&searchnum);
    if(searchcall(evensearch,a,searchnum,0,n-1)>=0)
    {
        printf("It is even and found at position %d. \n",searchcall(evensearch,a,searchnum,0,n-1)+1);
    }
    else{
        printf("Not found!\n");
    }

    if(searchcall(less22search,a,searchnum,0,n-1)>=0)
    {
        printf("It is less than 22 and found at position %d.",searchcall(less22search,a,searchnum,0,n-1)+1);
    }
    else{
        printf("Not found!");
    }
}
