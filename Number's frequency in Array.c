#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: "); scanf("%d", &n);
    int numbers[n];
    printf("Enter numbers.\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int FrequencyChecker[10]={0}; //This is an array whose each of the index tracks the frequency of all the digits in an array sequentially. By sequentially I meant the 0 index tracks the frequency of 0 in an array, the 1 index tracks frequency of 1 in array, 2 index checks for 2 in array and so on and stores their number of appearance in their distinct index. This process is continued to index 9 as a number can contain digits from 0-9. Therefore we created a frequency array from index 0-9 which will check their appearance and store it in their respective slot.
    //FrequencyChecker[10]={0}; //To set the value of all the indexes to zero at once, this can be done and this must be done at the line of declaration.
    ///This is a common and unique method of checking frequency of anything in an array. We create an array out of the objects whose frequency we want to know in another array and store the number of appearance of the object in the frequency array.
    for(int i=0; i<=9; i++) //Outer loop used to pick elements from frequency array as reference which will be compared with our desired array.
    {
        for(int j=0; j<n; j++) //Inner loop used used to generate each of the element from the desired array to compare.
        {
            if(i == numbers[j]) //So, outer loop is used to pick reference element (which we wanna compare) and inner loop is used to generate each of the element of the array sequentially for the comparison.
            {
                FrequencyChecker[i]++;
            }
        }
    }
    printf("\n%-10s%-10s\n", "Digit", "Appearance"); //A fancy and creative way to represent number of frequency in array.
    printf("---------------------\n");
    for(int i=0; i<=9; i++)
    {
        printf("%-10d%-10d\n", i,FrequencyChecker[i]);
    }
    return 0;
}
