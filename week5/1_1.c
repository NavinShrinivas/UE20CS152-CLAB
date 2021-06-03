#include<stdio.h>

void reversestring(char* rev,char* c)
{
    int n=0;
    while(*(c+n)!='\0'){
        n++;
    }
    for(int i=0;i<n;i++)
        *(rev+n-i-1)=*(c+i);
    *(rev+n)='\0';
}
bool palindrome(char* c)
{
    int n=0;
    while(*(c+n)!='\0'){
        n++;
    }
    char rev[n];
    reversestring(rev,c);
    for(int i=0;i<n;i++)
    {
        if(rev[i]!=c[i])
            return false;
    }
    return true;
}