//Read two integer values X and Y. Print the sum of all odd values between them.
#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter 2 integers: "); scanf("%d %d", &x, &y);
    if(x>y)
    {
        int temp=x; //I would call this binary testing system. Let's suppose the scene can be either 0 or 1 and we want the scene to be 0. Then we will just check if the scene is 1 or not. If it's 1 then we will convert it to 0 and perform our further task. On the other hand, if it's 0, then we don't need to care about anything else and start doing our further works.
        x=y; //Using this method we didn't need to perform 2 different tasks for 2 different possibilities. We somehow converted the reality to only 1 possibility and completed only 1 task based on that. TIME SAVING.
        y=temp;
    }
    for(int i=x+1; i<y; i++) //According to the question, the boundaries cannot be included.
    {
        if(i%2 == 0)
            continue;
        sum+=i;
    }
    printf("The sum is %d", sum);
    return 0;
}
