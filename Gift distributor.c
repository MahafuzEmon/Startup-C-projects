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
        break;
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
