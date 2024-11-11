//Given three coefficients (a, b, c), determine if the roots of the quadratic equation are real, complex, or repeated.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c, det; //Question didn't ask for any irrational root. Hence, we tool integer variables.
    printf("Comparing your quadratic equation to ax^2+bx+c=0, enter the values of a, b and c respectively.\n");
    printf("a= "); scanf("%d", &a);
    printf("b= "); scanf("%d", &b);
    printf("c= "); scanf("%d", &c);

    det=pow(b,2)-(4*a*c);
    if(det==0)
    {
        printf("The roots of the quadratic equation are repeated.\n");
    }
    else if(det>0)
    {
        printf("The roots of the quadratic equation are real.\n");
    }
    else
    {
        printf("The roots of the quadratic equation are complex.\n");
    }
    return 0;
}
