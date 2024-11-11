//Make a program that reads 3 integer values and presents the greatest one. Use formula to get the greatest value.
#include <stdio.h>
#include<math.h>
 int main() {

    int a,b,c,d,e;                         //If a and b are two values, then the formula to get the largest between them is:
    printf("Enter 3 values sequently: ");
    scanf("%d %d %d", &a, &b, &c);        //Largest=(a+b+absolutevalue(a-b))/2

    d=(a+b+abs(a-b))/2;
    e=(c+d+abs(c-d))/2;
    printf("%d is the largest value\n", e);
    return 0;
}
