#include <iostream>
using namespace std;

int main() 
{
    float arr[3] = {1.0, 2.0, 3.0};
    float* ptr;
    float sum = 0.0;
    ptr = arr;

    cout << "Displaying address using pointers: " << endl;
    for (int i = 0; i < 3; ++i)
        cout << "ptr + " << i << " = " << (ptr + i) << endl;
    cout << "\nDisplaying value using pointers: " << endl;
    for (int i = 0; i < 3; ++i)
        cout << "Value of index " << i << " = " << *(ptr + i) << endl;
    for (int i = 0; i < 3; ++i)
        sum += *(ptr + i);
    cout << "\nSum of all elements: " << sum << endl;

    return 0;
}