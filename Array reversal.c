#include<stdio.h>
void arrayrev(int baseadd[], int length)
{
    for(int i=1; i<=(length/2); i++) //Only half of the array elements will be taken for swapping. Otherwise it will swap twice and the whole array will remain same.
    {
        int temp=baseadd[i-1];
        baseadd[i-1]=baseadd[length-i];
        baseadd[length-i]=temp;
    }
}
int main()
{
    int arr[]={3,5,2,63,2,3,52,46,38};
    printf("%36s", "Array elements before reversal is: ");
    int length=sizeof(arr)/sizeof(arr[0]); //A special strategy to get length of an array. Dividing the memory size of whole array by the memory size of a element of the array returns the number of elements in the array.
    for(int i=0; i<length; i++)
    {
        printf("%2d   ", arr[i]);
    }
    arrayrev(arr, length);
    printf("\n");
    printf("%36s", "Array elements after reversal is: ");
    for(int i=0; i<length; i++)
    {
        printf("%2d   ", arr[i]);
    }
    return 0;
}
