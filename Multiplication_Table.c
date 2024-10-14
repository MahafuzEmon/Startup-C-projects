#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    for(int i=1; i<11; i++)
    {
        printf("\n%d x %2.0d = %d", n, i, n*i); //2 character space is taken for "i" to allign the equal sign. Null spaces will be added before the digit. To add them after the digit, use (%-2.0d)
    }
    return 0;
}