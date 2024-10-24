//Take two integers as input, calculate their Multiplication and Division, and print them out.
#include<stdio.h>
int main()
{
    int a,b, Mul;
    float Div;
    printf("Enter two numbers for a and b respectively: ");
    scanf("%d %d", &a, &b);
    Mul=a*b;
    Div=(float) a/b; //If we perform an operation between two integers, the output will also be an integer. It doesn't matter if the output is supposed to be a fraction or not, it will end up being an integer. Even if we make a floating variable, it will forcefully print the integer value as an fraction by just adding some .0000 values. To get an actual fraction, we need to typecast the format to a float.
    printf("\nMultiplication of %d and %d is: %d\nDivision of %d by %d is: %f\n", a,b,Mul,a,b,Div);
    return 0;
}
