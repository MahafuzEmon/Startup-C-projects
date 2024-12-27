#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: "); scanf("%d", &num);
    int constituent, remainder, reverse=0;
    constituent=num;
    while(constituent) //'0' stands for False and any non-zero number stands for True. Therefore, we have just used the value of the variable and condition because the loop must end when value of the variable will be zero. Hence, its value in itself will terminate the loop.
    {
        remainder=constituent%10;
        reverse=(reverse*10)+remainder;
        constituent=constituent/10;
    }
    if(num==reverse)
        printf("%d is a palindrome number\n", num);
    else
        printf("%d isn't a palindrome number as its reverse is %d\n", num, reverse);
    return 0;
}
