/* Check if a Number is a Palindrome
Write a loop to reverse a number and then check if its a Palindrome

PALINDROME -- reverse of a number is equal to a number



function Palindrome(int n)



output

cout<<"palindrome";

cout<<"not a palindrome";*/

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