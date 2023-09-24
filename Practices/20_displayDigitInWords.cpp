/* Display Digit in words
Display given Digit in Words



function DigitToWord(int d)

1 -- one

2 -- two

3 -- three

4 -- four

5 -- five

6 -- six

7 -- seven

8 -- eight

9 -- nine

0 -- zero
*/

#include <iostream>
using namespace std;

int main ()
{
    int d;
    cout << "Enter digit: ";
    cin >> d;
    if (d == 1)
        cout << "one";
    else if (d == 2)
        cout << "two";
    else if (d == 3)
        cout << "three";
    else if (d == 4)
        cout << "four";
    else if (d == 5)
        cout << "five";
    else if (d == 6)
        cout << "six";
    else if (d == 7)
        cout << "seven";
    else if (d == 8)
        cout << "eight";
    else if (d == 9)
        cout << "nine";
    else if (d == 0)
        cout << "zero";
    return 0;
}