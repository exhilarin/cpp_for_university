#include <iostream>
using namespace std;

int main() 
{
    int var = 7;
    int *point_var = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of pointer (point_var): " << point_var << endl;
    cout << "Value using pointer (*point_var): " << (*point_var) << endl;

    *point_var = 20;
    cout << "New value of var after modification through pointer: " << var << endl;

    return 0;
}