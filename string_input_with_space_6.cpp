#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    string s;
    // cin >> s; //Wont take input with spaces
    // cin.getlitne(s, 100); //Wont take input as (string) - this is a dynamic variable; will work for "c[100]" this.

    cin.ignore(); // Ignore "Enter" input for geline; cin.ignore() will not take the enter input;
    getline(cin, s); //Take input with spaces;

    cout << x << endl;
    cout << s << endl;


    return 0;
}
