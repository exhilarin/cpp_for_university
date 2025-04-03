#include <iostream>
#include <string>
using namespace std;
int main() 
{
    const int SIZE = 5;
    int numbers[SIZE];
    int count = 0;

    while (count < SIZE) 
    {
        int userInput;
        cout << "Enter a positive integer (" << count + 1 << " of " << SIZE << "): ";
        cin >> userInput;

        try {
            if (userInput <= 0) 
                throw string("Invalid input: " + to_string(userInput) + ". Please enter a positiveinteger.");
            numbers[count] = userInput;
            count++;
        }
        catch (const string& errorMessage) {
            cout << "Exception: " << errorMessage << endl;
        }
    }

    cout << "\nAll valid inputs received. The integers are:\n";
    for (int i = 0; i < SIZE; i++)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}