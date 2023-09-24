/* Check if Working Hours
Write condition to check is given time is Working hours or not

condition

if hour is from 9 to 18 its working hours

otherwise leisure



output

cout<<"working"

cout<<"leisure"*/

#include <iostream>
using namespace std;

int main ()
{
    int hour;
    cout << "Enter hour: ";
    cin >> hour;
    if (hour >= 9 && hour <= 18)
        cout << "Working";
    else
        cout << "Leisure";
    return 0;
}