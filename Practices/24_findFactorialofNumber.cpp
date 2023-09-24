/* Find Factorial of number
Write a loop to find factorial of number

function Factorial(int n)



output

cout<<fact*/

#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}