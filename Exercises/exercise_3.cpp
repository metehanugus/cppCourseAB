/* Write a Program to offer discounts on total bill Amount

Program should take Total Amount as input and calculate discount

If bill amount < 100 no discount
If bill amount is >= 100 and less than 500 then 10% discount
If bill amount is >=500 then 20% discount*/

#include <iostream>
using namespace std;

int main ()
{
    float totalAmount;
    cout << "Enter Total Amount: ";
    cin >> totalAmount;
    if (totalAmount < 100)
        cout << "No Discount";
    else if (totalAmount < 500)
        cout << totalAmount - totalAmount*0.1;
    else
        cout << totalAmount - totalAmount*0.2;
    return 0;
}