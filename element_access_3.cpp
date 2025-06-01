#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Access Index;
    string s;
    cin >> s;
    cout << s[2] << endl; //More convinient | Recommended;
    cout << s.at(2) << endl; //Prints third index of s;

    cout << s.front() << endl; //Prints the first charcter of s;

    cout << s.back() << endl; //Prints the last character of s;
    cout << s[s.size() - 1] << endl;

    
    return 0;
}
