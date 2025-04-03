#include <iostream>
using namespace std;

int main() 
{
    int sum;

    sum = 0;
    for (int i = 2; i <= 20; i += 2)
        sum += i;
    cout << "The sum of even integers from 2 to 20 is: " << sum << endl;
}