#include<stdbool.h>
#include<stdio.h>

bool postfix(char* c,char *b)
{
    int sc=0;
    while(*(c+sc)!='\0'){
        sc++;
    }
    int sb=0;
    while(*(b+sb)!='\0'){
        sb++;
    }
    sb--;
    for(int i=sc-1;i>=0;i--)
    {
        if(*(b+sb)==*(c+i))
            sb--;
        else if (sb>0 && *(b+sb)!=*(c+i))
            return false;
    }
    return true;
}