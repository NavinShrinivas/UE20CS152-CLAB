#include<stdio.h>
#include<stdbool.h>
#include"6_1.h"

int  main(){
    char c[10000];
    printf("Enter string 1 : ");
    scanf("%[^\n]%c",c);
    char b[10000];
    printf("Enter string 2 : ");
    scanf("\t%[^\n]%c",b);
    if(postfix(c,b))
        printf("1");
    else
        printf("0");

}