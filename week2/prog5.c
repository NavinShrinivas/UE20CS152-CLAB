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
            printf("%.2f+%.2f : %.2f",a,b,a+b);
            break;
        case '-':
            printf("%.2f-%.2f : %.2f",a,b,a-b);
            break;
        case '*':
            printf("%.2f*%.2f : %.2f",a,b,a*b);
            break;
        case '/':
            printf("%.2f/%.2f : %.2f",a,b,a/b);
            break;
        default:
            printf("Please enter a correct choice for operands");
            
    }
}