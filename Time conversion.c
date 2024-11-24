///Read an integer value, which is the duration in seconds of a certain event in a factory, and convert it in hours:minutes:seconds.
//Input: The input file contains an integer N.
//Output: Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.
//
//Input Sample	Output Sample
//556                0:9:16
//1                  0:0:1
//140153             38:55:53
#include<stdio.h>
int main()
{
    int t, hour, min;
    printf("Enter your time in seconds: ");
    scanf("%d", &t);
    hour=t/3600;
    min=(t%3600)/60; //Equivalent to, min=(t-(hour*3600))/60
    t=t%3600%60;  //Whenever we need some remaining of a value after dividing it by some other number, we will use the modular operator. It will give us the remaining left after diving anything with a number.
    printf("%d:%d:%d\n", hour, min, t);
    return 0;
}
