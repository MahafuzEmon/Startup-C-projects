#include<stdio.h>
#include<string.h> //To count string length
#include<ctype.h> //To change the case of letters as our program will be case insensitive. We will consider uppercase T and lowercase t to be same. toupper() used to convert into uppercase and tolower() used to convert into lowercase.
int main()
{
    char s[100];
    printf("Enter some text: "); gets(s);
    int FrequencyArray[26]={0}; //This will store frequency of each letter. First index will be for letter 'a', second one for 'b', third one for 'c' and finally the last one is for 'z'.
    int length=strlen(s);
    char c;
    for(int i=0; i<length; i++) ///Here, we didn't use linear search to search a character in the text as we did for numbers. Rather, we picked each character from the text sequentially and incremented corresponding index value from the Frequency Array.
    {       //We could have also used linear search and that would have also worked perfectly but that could create pressure on the CPU as we got many references here.
        c=tolower(s[i]);
        if(c>='a' && c<='z') //Checked if the character is a letter or not.
        {
            FrequencyArray[c - 'a']++; ///Incremented index value for the corresponding character using some clever systematic calculation. In programming, our key goal is to find this systematic and symmetric relation everywhere.
        }
    }
    printf("%-10s%-10s\n", "Letter", "Counts");
    for(int i=0; i<17; i++)
        printf("-");
    printf("\n");
    for(int i=0; i<26; i++)
    {
        printf("%-10c%-10d\n", i+'a', FrequencyArray[i]); //On each line, we have used the previous syntax of printing to match the alignment. This work will be done on line-by-line basis to create a table look.
    }
    return 0;
}
