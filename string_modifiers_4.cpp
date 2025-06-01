#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    string s2 = "World";

    //Append another string;
    // s += s2; 
    // s.append(s2);

    //Add a character end of a string;
    // s += 'A';
    // s.push_back('A');

    //Remove the last character of a string;
    s.pop_back();

    cout << s << endl;



    return 0;
}
