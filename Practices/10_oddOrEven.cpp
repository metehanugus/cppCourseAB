/* Check if Number is Odd or Even
Write conditional statement for checking is a number is positive or negative

function OddEven is taking parameter



parameter

n - a integer number



Output

cout<<"odd"

cout<<"even"*/

#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}