#include<stdio.h>
int main()
{
    int m=5, n=5;
    while(m--) //If post-update is used in while loop, firstly the compiler will check the value of the counter variable for condition checking, then it will update the value before entering into the while body. It won't update if after the execution of the body like for loop, rather it updates it before entering the body.
    {
        int static count1=1;
        printf("The iteration number for post-decrement is %d\n", count1);
        count1++; //For post-update, the while loop will run as much time as the value of counter variable. Can be perfectly used for test cases in problem solving.
    }
    printf("\n\n");
       while(--n) //If pre-update is used in while loop, firstly the compiler will update the value of the counter variable, then it will check for the condition (if it's true or not). Afterwards, if the condition is true then it will execute the body, else it won't.
    {
        int static count2=1;
        printf("The iteration number for pre-decrement is %d\n", count2);
        count2++; //For pre-update, the while loop will run 1 time lesser than the counter variable. If value of counter is 4, it will run 3 times.
    }
    return 0;
}
