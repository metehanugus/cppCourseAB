/* 
Calculate Discounted Bill Amount



function Discount(float amount)

if amount>=5000 offer 20% discount

if 2000<=amount<5000 offer 10% discount

if amount<2000 offer 5% discount



output

print discounted amount ie. bill amount after discount*/

#include <iostream>
using namespace std;

int main ()
{
    float amount;
    cout << "Enter amount: ";
    cin >> amount;
    if (amount >= 5000)
        cout << amount - amount*0.2;
    else if (amount >= 2000)
        cout << amount - amount*0.1;
    else
        cout << amount - amount*0.05;
    return 0;
}
