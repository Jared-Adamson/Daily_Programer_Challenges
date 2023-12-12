#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*
Welcome to cipher day!

Create a program that can take a piece of text and encrypt it.
*/


int main()
{
    string x = "";

    char* i = "X";

    cout << "Enter the text you would like encrypted:" << endl;

    getline(cin, x);

    int xLength = x.length();

    char* xArray = new char[xLength];

    strcpy(xArray, x.c_str());

    cout<< "Your encrypted text is:" << endl;

    for (int y = 0; y < xLength; y++)
    {

    //Changes ascii value by 2.
        xArray[y] = xArray[y]+2;

        cout << xArray[y];

    }

     cout<< endl << "Your decrypted text is:" << endl;

         for (int y = 0; y < xLength; y++)
    {

    //Changes ascii value back.
        xArray[y] = xArray[y]-2;

        cout << xArray[y];

    }

        return 0;
}
