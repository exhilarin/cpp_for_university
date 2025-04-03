#include <iostream>
using namespace std;

int main() 
{
    string password;
    do {
        cout << "Enter the password: ";
        cin >> password;

        if (password != "secret123") 
            cout << "Incorrect password. Please try again." << endl;
    } while (password != "secret123");

    cout << "Access granted." << endl;
}