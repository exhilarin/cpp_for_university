#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string sentence1, sentence2;

    cout << "Enter the first sentence: ";
    getline(cin, sentence1);

    cout << "Enter the second sentence: ";
    getline(cin, sentence2);

    sentence1.append(sentence2);
    cout << "The combined sentence is: " << sentence1 << endl;

    return 0;
}