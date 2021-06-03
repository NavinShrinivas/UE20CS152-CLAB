#include<stdio.h>
#include<stdbool.h>
#include"1_1.h"

int main(){
    char c[100000];
    char rev[100000];
    printf("Enter string : ");
    scanf("%[^\n]%c",c);
    reversestring(rev,c);
    /*need to pass size of array here are in fucntion its considered as a pointer
    we also pass in the empty reverse array as returning local variables from function 
    can lead to segfaults...This is due to scope of variabe*/
    printf("Reverse of string : ");
    int i=0;
    while(rev[i]!='\0')
    {
        printf("%c",rev[i]);
        i++;
    }
    printf("\n");
    if(palindrome(c))
        printf("The given string is a palindrome");
    else
        printf("Nope!Not a palidorme!");
}