#include<stdio.h>

bool setcheck(int &num,int &i)
{
    int copy=num>>i;
    if(copy % 2 != 0)
        return true;
    else
        return false;
}
void setbit(int &num,int &i)
{
    num=num|1<<i;
}
void clearbit(int &num,int &i)
{
    num=num&~(1<<i);
}

int main()
{
    printf("Enter a number :");
    int num;
    scanf("%i",&num);
    int index;
    printf("Enter bit whose set condition is to be checked![Start from 0] :");
    scanf("%i",&index);
    if(setcheck(num,index))
        printf("The bit is set \n");
    else
        printf("The bit is not set \n");
    printf("Enter bit which is to be set![Start from 0] :");
    scanf("%i",&index);
    setbit(num,index);
    printf("Number after setting index %i is : %i \n",index,num);
    printf("Enter bit which is to be cleared![Start from 0] :");
    scanf("%i",&index);
    clearbit(num,index);
    printf("Number after clearing index %i is : %i \n",index,num);
}