#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int numerator, denominator;
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) 
            throw string("Error: Division by zero is not allowed.");
        float result = numerator / denominator;
        cout << "Result of division: " << result << endl;
    }
    catch (const string& errorMessage) {
        cout << errorMessage << endl;
    }

    return 0;
}