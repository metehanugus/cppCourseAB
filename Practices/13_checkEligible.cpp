/* Check if a person is eligible for Offer
Write conditional statements to check if a person is eligible for offer

parameters for Eligible(int age)

age -- age of a person



if age is less than 12 or greater than 50

cout<<"eligible"

otherwise

cout<<"not eligible"

*/

#include <iostream>
using namespace std;

int main ()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age < 12 || age > 50)
        cout << "Eligible";
    else
        cout << "Not Eligible";
    return 0;
}