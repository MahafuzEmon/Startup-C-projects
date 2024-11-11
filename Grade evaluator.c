///Given a student's percentage score, determine their grade (A, B, C, D, or F) based on standard grading scales:
//A: 90% and above
//B: 80% to 89%
//C: 70% to 79%
//D: 60% to 69%
//F: Below 60%

#include<stdio.h>
int main()
{
    float num;
here:
    printf("Enter your percentage score (In plain number): ");
    scanf("%f", &num);
    if(num>=0 && num<=100) //If there is a condition which we need to check on each and every if-else ladder, then we should add that condition on a central if statement and make a nested if-else statement out of it.
    {

        if(num >=90)
        {
            printf("CONGRATULATIONS! You have got an A\n");
        }
        else if(num >=80)
        {
            printf("Great! You have got a B\n");
        }
        else if(num >=70)
        {
            printf("Good. You have got a C\n");
        }
        else if(num >=60)
        {
            printf("Well try. You have got a D\n");
        }
        else
        {
            printf("Sorry. You have got a F. Try better next time.\n");
        }
    }
    else
    {
        printf("You have entered something wrong. Your percentage score should be in between 0-100. Try again correctly.\n");
        goto here;
    }
    return 0;
}
