#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    cout << s << endl;

    stringstream ss(s); //Print each word using stringstream;
    string word;

    int count = 0; //TO count how many words String s has;

    while(ss >> word)//ss give each word to the object(Word) next to him than delets the word from his storage. //As long as word object is getting words form "stringstream" this loop will work; 
    {
        cout << word << endl;
        count++; //Adding +1 each time word object prints word;
    }

    cout << count << endl;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;


    return 0;
}
