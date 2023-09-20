/*
Calculate Distance
Write an expression for calculating Distance

parameters are

u -- initial velocity

v -- final velocity

a -- acceleration



just write an expression at line

Distance=*/

#include <iostream>
using namespace std;

int main () {
    int u, v, a;
    cout << "Enter initial velocity: ";
    cin >> u;
    cout << "Enter final velocity: ";
    cin >> v;
    cout << "Enter acceleration: ";
    cin >> a;
    float distance;
    distance = (v*v - u*u)/(2*a);
    cout << "Distance is " << distance;
    return 0;
}