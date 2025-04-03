#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int length = sentence.length();
    cout << "The length of the sentence is: " << length << endl;

    return 0;
}