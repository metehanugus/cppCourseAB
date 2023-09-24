/* 
Check if a number is Armstrong Number
Write a loop to find sum of cubes of digits of a number and check if its Armstrong number



function Armstrong(int n)

ARMSTRONG NUMBER - if the sum of cubes of digits of a number is equal to a number



output

cout<<"armstrong"

cout<<"not a armstrong"*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, temp;
    cout << "Enter n: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        sum += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
    }
    if (sum == n)
        cout << n << " is armstrong number" << endl;
    else
        cout << n << " is not armstrong number" << endl;
    return 0;
}