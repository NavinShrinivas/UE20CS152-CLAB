#include<stdio.h>
#include <string.h>


int main(){
    char str[100000];
    printf("Input:");
    fgets("%s",&str);
    char init=str[0];
    printf("%c",str[0]);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==init)
            continue;
        else{
            init=str[i];
            printf("%c",str[i]);
        }
    }
}