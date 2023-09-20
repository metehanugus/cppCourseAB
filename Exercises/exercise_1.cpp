/* Write a program to calculate Area of Circle
take radius as input*/

#include <iostream>
using namespace std;

int main () {
    int radius;
    cout << "Enter radius of Circle: ";
    cin >> radius;
    float area;
    area = 3.14*radius*radius;
    cout << "Area of Circle is " << area;
    return 0;
}