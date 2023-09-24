/* Nature of Quadratic Roots
Write nested if statements for printing Nature of Roots of Quadratic equation and also root

* this coding exercise is based on previous video*

find discriminant

d=b^2-4ac

if d=0 then roots are real and equal

if d>0 roots are real but unequal

if d<0 then riots are imaginary



function Roots(float a ,float b, float c)



output

cout<<"real and equal "<<r1;

cout<<"real and unequal "<<r1<<" "<<r2;

cout<<"imaginary";*/

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    float a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    float discriminant = b*b - 4*a*c;
    if (discriminant == 0)
    {
        float root = -b/(2*a);
        cout << "Real and Equal " << root;
    }
    else if (discriminant > 0)
    {
        float root1 = (-b + sqrt(discriminant))/(2*a);
        float root2 = (-b - sqrt(discriminant))/(2*a);
        cout << "Real and Unequal " << root1 << " " << root2;
    }
    else
        cout << "Imaginary";
    return 0;
}