#include <iostream>
using namespace std;

int area(int length, int width = 5)
{
    return (length * width);
}

int main() 
{
    cout << "Area with default width: " << area(10) << '\n';
    cout << "Area with specified width: " << area(10, 7) << '\n';
}