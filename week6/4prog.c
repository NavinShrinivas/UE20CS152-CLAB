#include<stdio.h>

struct complex{
    int real;
    int imaginary;
};
void comsum(struct complex complex1,struct complex complex2)
{
    if(complex1.imaginary+complex2.imaginary>0)
        printf("Sum :%i+%ii \n",complex1.real+complex2.real,complex1.imaginary+complex2.imaginary);
    else
        printf("Sum :%i%ii \n",complex1.real+complex2.real,complex1.imaginary+complex2.imaginary);
}
void comsub(struct complex complex1,struct complex complex2)
{
    if(complex1.imaginary-complex2.imaginary>0)
        printf("Sub :%i+%ii",complex1.real-complex2.real,complex1.imaginary-complex2.imaginary);
    else
        printf("Sub :%i%ii",complex1.real-complex2.real,complex1.imaginary-complex2.imaginary);
}
int main(){
    struct complex com1,com2;
    printf("Enter real and imaginary part of first complex 1: ");
    scanf("%i",&(com1.real));
    scanf("%i",&(com1.imaginary));
    printf("Enter real and imaginary part of complex 2: ");
    scanf("%i",&(com2.real));
    scanf("%i",&(com2.imaginary));
    comsum(com1,com2);
    comsub(com1,com2);
}