/* Display Grades for Students Marks
Write nested conditions to check average marks and display grades

*this coding exercise is based on previous video*

Calculate Average (Avg)



if Avg >=60 print Grade 'A'

if 35<=Avg<60 print Grade 'B'

if Avg<35 print Grade 'C'



function Grades(int m1,int m2,int m3)

parameters are marks in 3 subjects



output

cout<<'A'

cout<<'B'

cout<<'C'*/

#include <iostream>
using namespace std;

int main ()
{
    int m1, m2, m3;
    cout << "Enter marks in 3 subjects: ";
    cin >> m1 >> m2 >> m3;
    float avg = (m1 + m2 + m3)/3.0;
    if (avg >= 60)
        cout << "A";
    else if (avg >= 35)
        cout << "B";
    else
        cout << "C";
    return 0;
}