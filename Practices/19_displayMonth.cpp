/* Display Month Name
Display Name of a Month for a given Month number



function MonthName(int m)

1 -- jan

2 -- feb

3 -- mar

4 -- apr

5 -- may

6 -- jun

7 -- jul

8 -- aug

9 -- sep

10 -- oct

11 -- nov

12 -- dec*/

#include <iostream>
using namespace std;

int main ()
{
    int m;
    cout << "Enter month number: ";
    cin >> m;
    if (m == 1)
        cout << "Jan";
    else if (m == 2)
        cout << "Feb";
    else if (m == 3)
        cout << "Mar";
    else if (m == 4)
        cout << "Apr";
    else if (m == 5)
        cout << "May";
    else if (m == 6)
        cout << "Jun";
    else if (m == 7)
        cout << "Jul";
    else if (m == 8)
        cout << "Aug";
    else if (m == 9)
        cout << "Sep";
    else if (m == 10)
        cout << "Oct";
    else if (m == 11)
        cout << "Nov";
    else if (m == 12)
        cout << "Dec";
    return 0;
}