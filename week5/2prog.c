#include<stdio.h>
#include<stdbool.h>
#include"2_1.h"

int main()
{
    char c[100000],r,w;
    printf("Enter a sentence :");
    scanf("%[^\n]%*c",c);
    printf("Enter letter to replace :");
    scanf("%c",&r);
    printf("Enter letter to replace %c with :",r);
    scanf("\t%c",&w);
    charreplace(c,r,w);
    printf("After replacing :");
    int i=0;
    while(c[i]!='\0')
    {
        printf("%c",c[i]);
        i++;
    }
}