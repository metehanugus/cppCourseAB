/* Display Digits of a number
Write a loop to display Digits of a given number in reverse

function Digits(int n)



output

cout<<digit<<" "*/

#include <iostream>
using namespace std;

int main() {
    int n, digit;
    cout << "Enter n: ";
    cin >> n;
    cout << "Digits of " << n << " are: ";
    while (n > 0) {
        digit = n % 10;
        cout << digit << " ";
        n /= 10;
    }
    cout << endl;
    return 0;
}