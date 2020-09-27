// StringLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iostream>
#include"String.h"

using namespace std;


int main()
{
    
    {
        String _str1 = "a";
        String _str2 = "johnson";

        cout << _str1[_str1.getLength()-1] << endl;

        _str1[0] = 'k';
        _str1[22] = 'k';

        if (_str1) {
            cout << "yes" << endl;
        }




        cout << _str1 << endl;
        cout << _str1.getLength() << endl;


    }


    cout << "end" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
