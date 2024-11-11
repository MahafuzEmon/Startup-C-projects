//Input three numbers and print the largest.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers sequently:\n");
    printf("1st= "); scanf("%d", &a);
    printf("2nd= "); scanf("%d", &b);
    printf("3rd= "); scanf("%d", &c);

    (a>b && a>c)? printf("The largest number among %d, %d and %d is %d\n",a,b,c,a): ((b>a && b>c)? printf("The largest number among %d, %d and %d is %d\n",a,b,c,b) : ((c>a && c>b)? printf("The largest number among %d, %d and %d is %d\n",a,b,c,c): printf("All the numbers are equal.\n")));
    //To maintain order and sequence of operation in complex code, brackets are used, eventually to create nested ternary operator.
    ///While using brackets in complex cases, 1st put the whole opening and closing bracket at once to create the container and then enter the codes inside of the container. This will reduce the pain of adding closing brackets for the correct opening brackets and make the code perfect.
    return 0;
}
