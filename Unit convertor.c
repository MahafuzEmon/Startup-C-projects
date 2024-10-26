#include<stdio.h>
int main()
{   int option; float value;
    here:
    printf("Select your conversion type:\n*) Enter 1, for kms to miles\n*) Enter 2, for inches to feett\n*) Enter 3, for cms to inches\n*) Enter 4, for pound to kgs\n*) Enter 5, for inches to meters\n\nEnter your choice: ");
    scanf("%d", &option);
    fflush(stdin); //Used to clear input buffer because somehow the input buffer always stores a character. This creates problem for further character input.
    switch(option)
    {
    case 1:
        printf("\nEnter your measurement in kms: ");
        scanf("%f", &value);
        printf("\nYour measurement in miles is: %f\n", value*0.621);
        break;
    case 2:
        printf("\nEnter your measurement in inches: ");
        scanf("%f", &value);
        printf("\nYour measurement in feet is: %f\n", value*0.0833);
        break;
    case 3:
        printf("\nEnter your measurement in cms: ");
        scanf("%f", &value);
        printf("\nYour measurement in inches is: %f\n", value*0.394);
        break;
    case 4:
        printf("\nEnter your measurement in pound: ");
        scanf("%f", &value);
        printf("\nYour measurement in kgs is: %f\n", value*0.454);
        break;
    case 5:
        printf("\nEnter your measurement in inches: ");
        scanf("%f", &value);
        printf("\nYour measurement in inches is: %f\n", value*0.0254);
        break;
    default:
        printf("Oops! You have entered something wrong. Try again.\n\n");
        goto here;
        break;
    }
    char in;
    fflush(stdin); //Used to clear input buffer if any unused character or anything is left there.
    again:
    printf("\nDo you want to convert again? (y/n)\nYour answer: ");
    scanf("%c", &in);
    fflush(stdin);

    if(in == 'y' || in == 'Y')
        {goto here;}
    else if(in == 'n' || in == 'N')
        {goto there;}
    else
        {printf("You have entered something wrong. Try again.\n\n");
        goto again;}

    there:
    printf("\n*********Thank you very much!*********\n");
    return 0;
}
