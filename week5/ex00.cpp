#include <iostream>
using namespace std;

int main() 
{
    int arr[10];
    float sum = 0;
    float average = 0.0;

    cout << "Enter 10 integers: " << endl;
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    for (int i = 0; i < 10; i++) 
        sum += arr[i];

    average = sum / 10;

    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;
    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[9] << endl;

    return 0;
}