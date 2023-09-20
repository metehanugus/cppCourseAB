/*
Calculate Distance between 2 point
Write an Expression for finding Distance between 2 point

parameters

x1,y1 -- first point

x2,y2 -- second point



just write formula at line



dist=*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int x1, y1, x2, y2;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;
    float dist;
    dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout << "Distance between (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << dist;
    return 0;
}