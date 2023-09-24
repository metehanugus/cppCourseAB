/* Check if a number is Perfect Number
Write a loop to check if a number is perfect number

PERFECT NUMBER - sum of the factors of number is double the number



function Perfect(int n)

output

cout<<"perfect"

cout<<"not perfect"*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == 2 * n)
        cout << n << " is perfect number" << endl;
    else
        cout << n << " is not perfect number" << endl;
    return 0;
}