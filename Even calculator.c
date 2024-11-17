//An integer number will be given to us in between 1 to 100. We need to check if the number is dividable into two even parts. It's not necessary for the parts to be equal, they just need to be even. We need to check if the given number is dividable into this manner.
#include<stdio.h>
int main()
{
    int w;
    scanf("%d", &w);
    if(w==2) //An integer will be dividable into two even numbers only if the root number in itself is an even number. Odd numbers don't hold this property.
    {        //Also, an even number won't be divisible into two even integer if it is 2, as the number 2 is made up of 1+1 which are two odd integers.
        printf("NO\n"); //Therefore, only even numbers except 2 can be expressed as the sum of two even integers which is not mandatory to be equal.
    }
    else if(w%2==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
