/*this pesudo implementation of hash tables will allow us 
to solve this problem in O(n) instead of O(n^2)worst case senarios*/
/*think of this as simply a map*/
//n is the number of charecters in the sentence | similar to program 3 of week 5
#include<stdio.h>
#include"5_1.h"

int main(){
    char c[10000];
    printf("Enter a string :");
    scanf("%[^\n]%*c",c);
    char ans[10000];
    ocurrence(c);
}