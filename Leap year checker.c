//Check if a given year is a leap year.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: "); scanf("%d", &year);

    ((year%4==0 && year%100 != 0) || (year%100==0 && year%400==0))? printf("%d is a leap year\n", year) : printf("%d is not a leap year\n", year); //If a year is divisible by 4 and not a century year, then it will be a leap year. However, if a year is century year and divisible by 400 then it will also be a leap year.
    return 0;
}
