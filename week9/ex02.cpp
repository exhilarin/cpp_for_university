#include <iostream>
#include <string>
using namespace std;

string findLongestString(string* arr, int size)
{
    string longest = *arr;
    for (int i = 1; i < size; ++i)
    {
        if ((*(arr + i)).length() > longest.length())
            longest = *(arr + i);
    }
    return longest;
}
int main() 
{
    const int size = 4;
    string words[size] = {"Apple", "Banana", "Cherry", "Date"};

    cout << "The array of words is:\n";
    for (int i = 0; i < size; ++i)
        cout << i << ": " << words[i] << endl;
    string longestWord = findLongestString(words, size);
    cout << "\nThe longest word is: " << longestWord << endl;

    return 0;
}