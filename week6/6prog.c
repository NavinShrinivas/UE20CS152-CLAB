#include<stdio.h>

void fixinches(double *foot,double* inch)
{
    if(*inch>=12)
    {
        int newfoot=(*inch)/12;//i like this solution taking advantage of type conversions!
        *inch=(*inch)-(newfoot*12);
        *foot+=newfoot;
    }
}
int main()
{
    double foot1,inch1,foot2,inch2;
    printf("Enter 1st distance :\n");
    printf("Foot :");
    scanf("%lf",&foot1);
    printf("Inch :");
    scanf("%lf",&inch1);
    printf("Enter 2nd distance :\n");
    printf("Foot :");
    scanf("%lf",&foot2);
    printf("Inch :");
    scanf("%lf",&inch2);
    fixinches(&foot1,&inch1);
    fixinches(&foot2,&inch2);
    double tfoot=foot1+foot2;
    double tinch=inch1+inch2;
    fixinches(&tfoot,&tinch);
    printf("Sum of distance : %.2lf\' %.2lf\"",tfoot,tinch);
}