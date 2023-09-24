/* 
Sum of first N natural number
Write a loop to find sum of first n natural number

function SumOfN(int n)



output

cout<<sum*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " natural number is " << sum << endl;
    return 0;
}