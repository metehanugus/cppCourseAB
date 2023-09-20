/*Calculate Volume of a Cylinder
Write an Expression for calculating Volume of a Cylinder

parameters

radius -- radius of Cylinder

height -- height of Cylinder

take pi=3.14



write expression at line

volume=

*/

#include <iostream>
using namespace std;

int main () 
{
    int radius, height;
    cout << "Enter radius of Cylinder: ";
    cin >> radius;
    cout << "Enter height of Cylinder: ";
    cin >> height;
    float volume;
    volume = 3.14*radius*radius*height;
    cout << "Volume of Cylinder is " << volume;
    return 0;
}