//Take three angles as input and determine if they can form a triangle. If yes, check if it’s an equilateral, isosceles, or scalene triangle.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter your 3 angles for a triangle\nA=");scanf("%f", &a);
    printf("B=");scanf("%f", &b);  //scanf function creates a newline automatically after taking an input.
    printf("C=");scanf("%f", &c); //Something written after a scanf won't be shown on the console until that scanf takes an input. First the scanf will take some input, then text or anything after that will be shown on the console. This concept can be used to create interactive input screen made in this program. This concept can also be used in some other places.

    if (a+b+c == 180)
    {
        if(a==b && b==c) //If a=b and b=c is true, that automatically means a=c. Otherwise a!=c. Hence third condition is not needed to check.
        {
            printf("Yes. The angles can form a triangle and it will be an equilateral triangle.\n");
        }
        else if(a==b || b==c || c==a)
        {
            printf("Yes. The angles can form a triangle and it will be an isosceles triangle.\n");
        }
        else
        {
            printf("Yes. The angles can form a triangle and it will be an scalene triangle.\n");
        }
    }
    else
    {
        printf("Sorry. The angles cannot create a triangle.\n");
    }
    return 0;
}
