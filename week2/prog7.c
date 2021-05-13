#include<stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Enter coefficients a,b,c :");
    scanf("%i %i %i",&a,&b,&c);
    int d=b*b-(4*a*c);
    if(d==0)
    {
        float root=-(b/(2*a));
        printf("root1=root2=%.3f",root);
    }
    else if(d>0)
    {
        float root1=(-b+sqrt(d))/(2*a);
        float root2=(-b-sqrt(d))/(2*a);
        printf("Root 1 =%.3f \n",root1);
        printf("Root 2 =%.3f \n",root2);
    }
    else if(d<0)
    {
        float real=-b/(2*a);
        float imaginary=sqrt(-d)/(2*a);//beacause d itself is giving a -ve and sqrt of negtives is well...meh!
        printf("root1 =%.3f+i%.3f \n",real,imaginary);
        printf("root2 =%.3f-i%.3f \n",real,imaginary);
    }
}   