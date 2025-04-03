#include <iostream>
using namespace std;

int main() 
{
    const int SIZE = 50;
    char word[SIZE];

    cout << "Enter a word (less than 50 characters): ";
    cin.getline(word, SIZE);

    int length = 0;
    while (word[length] != '\0')
        length++;

    cout << "The length of the entered word is: " << length << endl;

    return 0;
}