#include<stdio.h>

int main(){
    char choice;
    printf("Select operation [+,-,*,/] :");
    scanf("%c",&choice);
    printf("Enter two operands :");
    float a,b;
    scanf("%f %f",&a,&b);
    switch(choice)
    {
        case '+':
            printf("Result : %.2f",a+b);
            break;
        case '-':
            printf("Result : %.2f",a-b);\
            break;
        case '*':
            printf("Result : %.2f",a*b);
            break;
        case '/':
            printf("Result : %.2f",a/b);
            break;
        default:
            printf("Please enter a correct choice for operands");
            
    }
}