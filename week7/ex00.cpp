#include <iostream>
using namespace std;
int main() 
{
    int arr[5] = {4, 1, 5, 3, 2};
    int n = 5;

    for (int i = 0; i < n - 1; ++i) 
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j) 
        {
            if (arr[j] > arr[maxIndex]) 
                maxIndex = j;
        }
        if (maxIndex != i) 
        {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
    cout << "Sorted array (descending): ";
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}