/* All years which are perfectly divisible by 4 are leap years except for
century years (years ending with 00) which is leap year only it is
perfectly divisible by 400.

For example: 2012, 2004, 1968 etc are leap year but, 1971, 2006
etc are not leap year. Similarly, 1200, 1600, 2000, 2400 are leap
years but, 1700, 1800, 1900 etc are not.

In this program below, user is asked to enter a year and this program
checks whether the year entered by user is leap year or not.*/

#include <iostream>
using namespace std;

int main () {
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year%400 == 0)
                cout << "Leap year";
            else
                cout << "Not leap year";
        }
        else
            cout << "Leap year";
    }
    else
        cout << "Not leap year";
    return 0;
}