//Find the largest number among 10 numbers using Linear Search or Linear Scan.
#include<stdio.h>
int main()
{
    int num[10], comparer;
    printf("Enter 10 numbers to compare\n");
    for(int i=0; i<10; i++)
    {
        printf("%d= ", i+1); scanf("%d", &num[i]);
    }

    comparer= num[0]; //To find the largest number among 10 numbers, we let the 1st number be the maximum value and put it into a third party variable using which we will compare that to all other elements. Then we will compare that third party value to all other values to check if any of them is greater than the compared one. If so, we will overwrite that supposed value into the third party variable and after doing this for all other elements, we will end up getting the maximum value inside of the third party variable.
    for(int i=1; i<10; i++)
    {
        if(num[i] > comparer) //So here, we copied the 1st element of the array to a third party variable and compared that to all the elements of the array linearly. This algorithm is called Linear Search or Linear Scan and can be helpful for more complicated stuff.
        {
            comparer=num[i];
        }
    }
    printf("\nThe largest number is %d\n", comparer);

    return 0;
}
