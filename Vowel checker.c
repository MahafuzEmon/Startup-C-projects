//Write a program that takes a character input and checks if it is a vowel or a consonant.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if(a=='A' || a=='a' || a=='E' || a=='e' || a=='I' || a=='i' || a=='o' || a=='O' || a=='U' || a=='u')
    {
        printf("Your character is a vowel.\n");
    }
    else
    {
        printf("Your character is a consonant.\n");
    }
    return 0;
}
