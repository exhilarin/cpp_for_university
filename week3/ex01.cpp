#include <iostream>
using namespace std;

int main() 
{
    int sum;
    int i;
    
    sum = 0;
    i = 1;
    while (i <= 20) 
    {
        if (i % 2 == 0) 
            sum += i;
        i++;
    }
    cout << "The sum of even integers from 2 to 20 is: " << sum << endl;
}