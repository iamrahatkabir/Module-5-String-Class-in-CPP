#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    // for(int i = 0; i < s.size(); i++)
    // {
    //     cout << s[1] << endl;
    // }

    // cout << *s.begin() << endl; //Prints the first character of a string;
    // cout << *(s.end()-1) << endl; //s.end() prints the next character of last character. to print the last character add -1;

    //Print using iterator;
    // for(string :: iterator it = s.begin(); it < s.end(); it++)
    for(auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }


    return 0;
}
