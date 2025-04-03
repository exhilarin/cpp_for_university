#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 9, 15, 21, 36, 43, 50, 61, 72, 88, 98};
    int n = 11;
    int target = 61;
    int low = 0;
    int high = n - 1;
    bool found = false;
    int foundIndex = -1;

    while (low <= high) 
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target) 
        {
            found = true;
            foundIndex = mid;
            break;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (found) 
        cout << "Target " << target << " found at index " << foundIndex << endl;
    else
        cout << "Target " << target << " not found" << endl;

    return 0;
}