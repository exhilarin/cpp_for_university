#include <iostream>
using namespace std;

int sumToN(int n) 
{
    if (n == 1)
        return 1;
    return (n + sumToN(n - 1));
}

int main() 
{
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 0)
        cout << "Please enter a positive integeri" << endl;
    else 
        cout << "The sum from 1 to " << number << " is: " << sumToN(number) << endl;
}