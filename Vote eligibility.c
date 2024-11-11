//Take the age of a user and print whether they are eligible to vote. (Eligibility age is 18.)
#include<stdio.h>
int main()
{
    float age; int n=0;
    here:
    if(n==1)
        printf("\n"); //A condition is added in a clever way to add a new line after the goto statement. This newline won't be added at the first run, but will be added on any iterative run.
    printf("Enter your age: "); scanf("%f", &age);
    if(age>=0) // A common condition is added at the top and a nested if-else is created out of it.
    {
        if(age>=18)
        {
            printf("You are eligible to vote.\n");
        }
        else
        {
            printf("Sorry! Your are not eligible to vote yet. It will take %.1f year/years for you to be eligible.\n", 18-age);
        }
    }
    else
    {
        printf("Sorry! You have entered something wrong. You must enter your age in positive value. Try again.\n");
        n=1; // Value of n is assigned to 1 to get the condition true which will eventually add a newline character on the iterative run.
        goto here;
    }
    return 0;
}
