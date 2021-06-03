#include<stdio.h>
#include"4_1.h"

int main(){
    char s1[10000],s2[10000];
    int n;
    printf("Enter string 1 :");
    scanf("%[^\n]%*c",s1);
    printf("Enter a string 2 :");
    scanf("%[^\n]%*c",s2);
    printf("Enter number of times to concatenate :");
    scanf("%i",&n);
    concatenate(s1,s2,n);
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c",s1[i]);
        i++;
    }
}