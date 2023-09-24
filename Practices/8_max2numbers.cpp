/* Write conditional statement to find Maximum of 2 numbers

Parameters

x and y are 2 numbers



Expected output: print maximum number, just print a number

example

cout<<x;     or   cout<<y;
*/

#include <iostream>
using namespace std;

int main ()
{
    int x, y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;
    if (x > y)
        cout << x << "Is bigger";
    else
        cout << y << "Is bigger";
    return 0;
}