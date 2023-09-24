/* Number is Positive or Negative
Find if a given number is Positive or Negative

Parameter

n - a integer number

output

cout<<"positive" or cout<<"negative"*/

#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0)
        cout << "Positive";
    else
        cout << "Negative";
    return 0;
}