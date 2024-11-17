#include<bits/stdc++.h>//According to ASCII, capital 'A' comes first (65) and small 'a' comes later (97).
using namespace std;
int main()
{
    string in;
    cin>>in;
    if(in[0]< 'a') //Using the previous concept, we can performing arithmetic operation between two characters. As it is an arithmetic operation, the calculation will be done using ASCII value.
    {
        cout<<in<<endl;
    }
    else
    {
        in[0]= in[0]-('a' - 'A'); //Again by using the previous logic, rather than using numbers directly, we are using the characters (Surrounding by single quotation. Otherwise, it will be treated as variable) in the arithmetic operation, which will automatically be done using ASCII values.
        cout<<in<<endl;
    }
    return 0;
}
