#include<stdio.h>

int main(){
    char str[100000];
    printf("Enter a Sentence : \n");
    scanf("%[^\n]%c",&str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i]=str[i]-32;
        i++;
    }
    printf("Enter string in UPPERCASE: \n %s",str);
}