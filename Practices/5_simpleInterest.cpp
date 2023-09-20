/*Calculate Simple Interest
Write an Expression for calculating Simple Interest

parameters are



P -- principle amount

T -- time

R -- rate of interest



just write the formula for simple interest at line

SI=*/

#include <iostream>
using namespace std;

int main () 
{
    int P, T, R;
    cout << "Enter principle amount: ";
    cin >> P;
    cout << "Enter time: ";
    cin >> T;
    cout << "Enter rate of interest: ";
    cin >> R;
    float SI;
    SI = (P*T*R)/100;
    cout << "Simple Interest is " << SI;
    return 0;
}