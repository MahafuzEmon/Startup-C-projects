#include<stdio.h>
int main()
{
    int n;
    printf("a) Enter \"1\", if you have passed both Math and Science\n");
    printf("b) Enter \"2\", if you have passed only Math\n");
    printf("c) Enter \"3\", if you have passed only Science\n\n");
    printf("Your answer: ");
    scanf("%d", &n);

    switch(n)
    {
    case 1:
        printf("\nCongratulations! You have got 45 points.\n");
        break;  //break statement is used because if any case matches and gets executed, the matching process will be stopped and all the following cases will be executed. Doesn't matter if the case matches or not. To break this conditionless flow, we had to use break.
    case 2:
        printf("\nCongratulations! You have got 15 points.\n");
        break;
    case 3:
        printf("\nCongratulations! You have got 15 points.\n");
        break;
    default:
        printf("\nSorry, you have entered invalid answer.\n");
        break;
    }
    return 0;
}
