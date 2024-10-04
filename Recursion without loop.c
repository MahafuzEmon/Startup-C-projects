//Write all the even numbers in between 1 to 10 without using any loop. Rather, try to use if-else statement.
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    if(a[0]%2==0)
    {
        printf("%d\n", a[0]);
    }
    if(a[1]%2==0)
    {
        printf("%d\n", a[1]);
    }
    if(a[2]%2==0)
    {
        printf("%d\n", a[2]);
    }
    if(a[3]%2==0)
    {
        printf("%d\n", a[3]);
    }
    if(a[4]%2==0)
    {
        printf("%d\n", a[4]);
    }
    if(a[5]%2==0)
    {
        printf("%d\n", a[5]);
    }
    if(a[6]%2==0)
    {
        printf("%d\n", a[6]);
    }
    if(a[7]%2==0)
    {
        printf("%d\n", a[7]);
    }
    if(a[8]%2==0)
    {
        printf("%d\n", a[8]);
    }
    if(a[9]%2==0)
    {
        printf("%d\n", a[9]);
    }
    return 0;
}
/*We have only used "if" statement because if we use "if-else" statement then compiler will get out of the block 
of "if" as soon as one condition gets true. As a result, it won't check for the next conditions and will only 
print one value for the true condition. To check every condition and to print every value, we have used only "if" statement. Thus, 
compiler will go through every block of condition and will print every value for true conditions.*/