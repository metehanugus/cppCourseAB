/* 
Display Day name
Display name of the Day fro given Day Number

day number -- day name(3 letters)

1 -- sun

2 -- mon

3 -- tue

4 -- wed

5 -- thu

6 -- fri

7 -- sat

function DayName(int day)

day -- Day number



output*/

#include <iostream>
using namespace std;

int main ()
{
    int day;
    cout << "Enter day number: ";
    cin >> day;
    if (day == 1)
        cout << "Sun";
    else if (day == 2)
        cout << "Mon";
    else if (day == 3)
        cout << "Tue";
    else if (day == 4)
        cout << "Wed";
    else if (day == 5)
        cout << "Thu";
    else if (day == 6)
        cout << "Fri";
    else if (day == 7)
        cout << "Sat";
    return 0;
}