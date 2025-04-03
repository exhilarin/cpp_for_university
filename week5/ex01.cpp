#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string arr[5];
    cout << "Enter 5 words: " << endl;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Words entered:" << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl << "First word: " << arr[0] << endl;
    cout << "Last word: " << arr[4] << endl;

    return 0;
}