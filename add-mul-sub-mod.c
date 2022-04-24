#include <stdio.h>
#include <conio.h>

int main()
{

    printf("Enter two numbers: ");
    float num1, num2;
    scanf("%f", &num1,"%f", &num2);

    float add;
    add = num1+num2;
    printf("The addition of the two numbers is: %f", add);

    float sub;
    sub = num1 + num2;
    printf("The subtraction of two numbers is: %f", sub);

    float mul;
    mul = num1*num2;
    printf("The multiplication of two numbers is: %f", mul);

    int mod;
    mod = num1%num2;    //modulus functions can't use modulus function
    printf("The modulus of two numbers is: %i", mod);

    return 0;
}