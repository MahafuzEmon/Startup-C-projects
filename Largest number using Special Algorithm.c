#include<stdio.h>
int main()
{
    int num[10], comparer;
    printf("Enter 10 numbers to compare\n");
    for(int i=0; i<10; i++)
    {
        printf("%d= ", i+1); scanf("%d", &num[i]);
    }

    comparer= num[0];
    for(int i=1; i<10; i++)
    {
        if(num[i] > comparer)
        {
            comparer=num[i];
        }
    }
    printf("\nThe largest number is %d\n", comparer);

    return 0;
}
