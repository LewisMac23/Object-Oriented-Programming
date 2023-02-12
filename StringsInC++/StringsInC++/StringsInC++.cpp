// StringsInC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    // C-style strings
    
    /*
    char str1[100];
    cout << "Enter your name: " << endl;
    cin.getline(str1, 100);
    cout << "Name is : " << str1<<endl;
    */

    // C++ string class

    cout << "Enter a string" << endl;
    string obj;
    
    getline(cin, obj);
    cout << "String is : " << obj << endl;
    cout << "String length is: " << obj.length() << endl;

    return 0;
}

