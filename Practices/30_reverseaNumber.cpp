/* Reverse a Number
Write a loop for Reversing the Digits of a Number



function Reverse(int n)

output

cout<<rev*/

#include <iostream>
using namespace std;

int main() {
    int n, digit, rev = 0;
    cout << "Enter n: ";
    cin >> n;
    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    cout << "Reverse of number is " << rev << endl;
    return 0;
}