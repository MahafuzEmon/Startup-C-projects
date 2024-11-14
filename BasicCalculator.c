#include<stdio.h>

int main()
{
    char op; int a,b, i=0;
    wrong:
    fflush(stdin);
    if(i==1)
        printf("\n");
    printf("Enter one of the following operation you want to perform:\n\n\'+\' for Addition\n\'-\' for Subtraction\n\'*\' for Multiplication\n\'/\' for Division\n\n");
    printf("Enter your choice: "); scanf("%c", &op); fflush(stdin);
    printf("\nEnter two numbers\n");
    printf("1st= "); scanf("%d", &a);
    printf("2nd= "); scanf("%d", &b);
    switch(op)
    {
    case '+':
        printf("The addition of %d and %d is= %d\n", a,b,a+b);
        break;
    case '-':
        printf("The subtraction of %d from %d is= %d\n", b,a,a-b);
        break;
    case '*':
        printf("The multiplication of %d and %d is= %d\n", a,b,a*b);
        break;
    case '/':
        printf("The division of %d by %d is= %.2f\n", a,b,(float)a/b);
        break;
    default:
        printf("You have entered a wrong option. Enter again.\n");
        i=1;
        goto wrong;
    }
    char op2;
    fflush(stdin);
    printf("\nDo you want to calculate again? (y/n)\n\nYour opinion: "); scanf("%c", &op2); fflush(stdin);
    if((op2 == 'y') || (op2 == 'Y'))
    {
        i=1;
        goto wrong;
    }

    printf("\n----------THANK YOU----------\n");
    return 0;

}
