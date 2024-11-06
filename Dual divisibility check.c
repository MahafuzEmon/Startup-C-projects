#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if((n%5)==0 && (n%11)==0)
    {
        printf("Your number %d is divisible by both 5 and 11\n", n); //Adding a newline character at the end of a string is a good practice
    }
    else
    {
        printf("Your number %d is not divisible by both 5 and 11\n", n);
    }
    return 0;
}
