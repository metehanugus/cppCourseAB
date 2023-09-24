/* Display Name of a Day
Display Day name for a given Day number

function DayName(int day), using switch case



1 -- sun

2 -- mon

3 -- tue

4 -- wed

5 -- thu

6 --fri

7 -- sat*/

#include <iostream>
using namespace std;

int main () {
    int day;
    cout << "Enter day number: ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Sun";
            break;
        case 2:
            cout << "Mon";
            break;
        case 3:
            cout << "Tue";
            break;
        case 4:
            cout << "Wed";
            break;
        case 5:
            cout << "Thu";
            break;
        case 6:
            cout << "Fri";
            break;
        case 7:
            cout << "Sat";
            break;
    }
    return 0;
}