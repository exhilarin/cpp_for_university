#include <iostream>
using namespace std;

int main() 
{
    int arr[3][3];
    int totalSum = 0;

    cout << "Enter 9 integers to fill a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cin >> arr[i][j];
            totalSum += arr[i][j];
        }
    }

    cout << "\nThe 3x3 matrix is:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "\nTotal sum of elements: " << totalSum << endl;
    for (int i = 0; i < 3; i++) 
    {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) 
            rowSum += arr[i][j];
        cout << "Sum of elements in row " << i + 1 << ": " << rowSum << endl;
    }

    return 0;
}