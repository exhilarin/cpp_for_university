#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int index;
    cout << "Enter an index between 0 and 4: ";
    cin >> index;

    try {
        if (index < 0 || index >= 5) 
            throw string("Index out of range: " + to_string(index));
        cout << "Value at index " << index << " is " << numbers[index] << endl;
    }
    catch (const string& errorMessage) {
        cout << "Exception: " << errorMessage << endl;
    }

    return 0;
}