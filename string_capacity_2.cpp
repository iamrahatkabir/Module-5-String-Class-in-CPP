#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    // cout << s.size() << endl;

    // cout << s.max_size() << endl;

    // cout << s.capacity() << endl;

    // s.clear();  //Deletes the string;
    // if(s.empty() == true)
    // {
    //     cout << "Empty" << endl;
    // }
    // else{
    //     cout << "Not Empty" << endl;
    // }

    s.resize(6);
    s.resize(15, 'x'); //Fill the garbeg value with a character;
    cout << s << endl;





    return 0;
}
