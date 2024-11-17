///Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.
//Note, that during capitalization all the letters except the first one remains unchanged.
//Input: A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.
//Output: Print the given word after capitalization.
//Examples:-
//InputCopy
//ApPLe
//OutputCopy
//ApPLe
//InputCopy
//konjac
//OutputCopy
//Konjac
#include<bits/stdc++.h> //Contains most of the important header files which reduces time in competitions.
using namespace std;
int main()
{
    string in;
    cin>>in;
    if(in[0]<97) //Here, a character is being compared to an integer and it's still working by comparing the ASCII value of the character with the integer without any typecasting. This works because characters in C and C++ are essentially represented by their ASCII values when used in arithmetic or comparison operations. When we operate an integer with a float, the output becomes a float because float is a general version which can represent both integer and float. Same goes here, integer is a common datatype which can hold both integer and character. Hence, while comparing a character with an integer to do arithmetic operation, the character gets represented using ASCII value.
    {           //This means that when you use a character in a comparison or arithmetic operation, the compiler implicitly converts it to its corresponding integer value (its ASCII value) for the comparison.
        cout<< in<<endl;
    }
    else
    {
        in[0]= in[0]-32; //Here, again we are subtracting an integer from a character. Hence, 32 will be subtracted from the ASCII value of the character and the result should remain an integer.
        cout<<in<<endl; //However, we are still getting a character because we are storing the integer value inside of a character variable (Strings are characters). Therefore, the integer value is getting typecasted into a character here. No need to do extra typecasting.
    }
    return 0;
}
