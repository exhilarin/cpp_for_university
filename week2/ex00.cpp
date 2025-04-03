#include <iostream>
using namespace std;

int main() 
{
    string input;
    cout << "Please enter the text: ";
    cin >> input;

    if (input == "istinye")
        cout << "Welcome to the system." << endl;
    else
        cout << "Access denied." << endl;
}