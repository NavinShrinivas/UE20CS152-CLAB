#include<stdio.h>

const char* grade(int &grade)
{
    if(grade>85)
        return "A";
    else if(grade<85 && grade>60)
        return "B";
    else if(grade<=60 && grade>40)
        return "C";
    else if(grade<=40 && grade>30)
        return "D";
    else
        return "Fail";
}

int main()
{
    printf("Enter grade : ");
    int g;
    scanf("%i",&g);
    printf("Your grade : %s",grade(g));
}