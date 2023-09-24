/* Write a program which takes an integer from user and
that integer is reversed.
If the reversed integer is equal to the integer entered
by user then, that number is a palindrome if not that number
is not a palindrome*/

#include <iostream>
using namespace std;

int main() {
    int n, temp, rev = 0;
    cout << "Enter n: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == n)
        cout << n << " is palindrome" << endl;
    else
        cout << n << " is not palindrome" << endl;
    return 0;
}