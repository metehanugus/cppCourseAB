/* Finding maximum of 3 numbers
Write nested if conditions to find maximum of three numbers

parameters of Max3(int a, int b, int c)

a,b and c are 3 numbers



output

print greatest number*/

#include <iostream>
using namespace std;

int main ()
{
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
            cout << a;
        else
            cout << c;
    }
    else
    {
        if (b > c)
            cout << b;
        else
            cout << c;
    }
    return 0;
}