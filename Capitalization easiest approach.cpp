#include<bits/stdc++.h>
using namespace std;

int main() {
    string in;
    cin >> in;

    // Capitalize the first letter if it's lowercase
    if (islower(in[0])) //islower() string function checks if a character is in lowercase or uppercase and returns either true or false value.
    {
        in[0] = toupper(in[0]); //toupper() string function converts a lowercase character into uppercase.
    }

    cout << in << endl;  // Output the modified word
    return 0;
}

