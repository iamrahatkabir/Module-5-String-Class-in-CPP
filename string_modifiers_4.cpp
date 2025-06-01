#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    // string s2 = "World";

    //Append another string;
    // s += s2; 
    // s.append(s2);

    //Add a character end of a string;
    // s += 'A';
    // s.push_back('A');

    //Remove the last character of a string;
    // s.pop_back();

    //Assing a string a value;
    // s = "hi";
    // s = s2;
    // s.assign("Hi");

    //Erase a specfic portion of a string;
    // s.erase(3); //If you want to delete rest of the characters from a string;
    // s.erase(3, 2); // (3)->From which character you want to erase. (2)->How many characters you want to erase;
    
    //Replace a portion of a string;
    // s.replace(6, 5, "Bangladesh"); //(6)-> From whic character you want to replace; (5)->How many character u want to replace; ("String")->What u want to replace with;
    // s.replace(6, 0, "Bangladesh"); //If u dont want to delete characters;

    //Insert a specfic portion in a string;
    s.insert(5, "Rahat"); //(5)-> Where u want to insert; ("String")->What u want to insert;


    cout << s << endl;



    return 0;
}
