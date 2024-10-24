//Sum the numbers taken as input from the user using a while loop.
#include<stdio.h>
int main()
{
 /* float in=0, sum=0;
    while(in != -2)
    {
        printf("Enter your number (Enter \"-2\" to terminate): ");
        scanf("%f", &in);
        if(in == -2)
        {
            break;
        }
        sum+=in;
    }
    printf("\nYour summation is: %.2f\n", sum);
    return 0; */
    float in, sum=0;
    while(1)
    {
        printf("Enter your number (Enter \"-2\" to terminate): ");
        scanf("%f", &in);
        if(in == -2)
        {
            break;  //Here, we have made an infinite while loop by giving the argument "1", which means true. Then we have given the loop termination condition inside of an if-else statement and used break statement for the condition. Hence, if the condition meets, then it will enter into if's body and break the loop. This could be an alternative use of conditions to terminate the loop. Could be lengthy but interesting.
        }           //The program could also be made in the previous regular way. We just made it in this way to demonstrate an interesting method to terminate a loop rather than using the loop's conditional statement.
        sum+=in;
    }
    printf("\nThe summation is: %.2f\n", sum);
    return 0;
}
