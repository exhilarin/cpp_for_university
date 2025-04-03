#include <iostream>
using namespace std;

void doubleByValue(int num) 
{
    num *= 2;
    cout << "Inside doubleByValue, doubled value = " << num << endl;
}

void doubleByReference(int &num) 
{
    num *= 2;
    cout << "Inside doubleByReference, doubled value = " << num << endl;
}

int main() 
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Before doubleByValue, number = " << number << endl;
    doubleByValue(number);
    cout << "After doubleByValue, number = " << number << " (No change in main)" << endl;

    cout << "Before doubleByReference, number = " << number << endl;
    doubleByReference(number);
    cout << "After doubleByReference, number = " << number << " (Value changed in main)" << endl;
}