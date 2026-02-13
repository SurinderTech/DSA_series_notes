// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    // taking input in any data type
    string input;
    cout << " Enter ASCII value or character : ";
    // user input
    cin >> input;
    // char variable daclaration
    char ch;

    int ascii;
    // input Detection
    if (input.length() > 1 || isdigit(input[0]))
    {
        ascii = stoi(input);
        ch = ascii;
    }
    else
    {
        ch = input[0];
        ascii = ch;
    }
    // printing values
    cout << " Character:" << ch << endl;
    cout << " ASCII Value:" << ascii << endl;
    // checking ascii values
    if (ch >= 'A' || ch <= 'z')
    {
        cout << " UpperCase";
    }
    else if (ch >= 'a' || ch <= 'z')
    {
        cout << "LowerCase";
    }
    else
    {
        cout << " Not a alphabet";
    }

    return 0;
}