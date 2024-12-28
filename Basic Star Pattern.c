#include<stdio.h>
#include<stdlib.h> //Added to use system() function which can run command line prompt straight through the program.
int main()
{
    int op;
    printf("%s\n%15s\n%s\n\n", "Enter \'0\' for Triangular pattern","or","Enter \'1\' for Reverse Triangular pattern");
    printf("Enter your choice: "); scanf("%d", &op);
    system("cls"); //To clear the text of CMD so far.
    if(op)
    {
        printf("The reversed star pattern is shown below:\n");
        for(int i=1; i<=4; i++) //Outer for loop is used for creating row
        {
            for(int j=1; j<=5-i; j++) //Inner for loop is used for creating column
            {
                printf("*");
            }
            printf("\n");
        }

    }
    else
    {
        printf("The star pattern is shown below:\n");
        for(int i=1; i<=4; i++)
        {
            for(int j=1; j<=i; j++) //For this case, number of column elements for every row is equal to the no of respective row. On row 1, column element is 1; on row 2, column elements are 2 and so on.
            {                       ///For a row, if we need to print 'n' amount of stuff using loop, the condition of the loop will be '<=n'.
                printf("*");
            }
            printf("\n");
        }
    }
}
