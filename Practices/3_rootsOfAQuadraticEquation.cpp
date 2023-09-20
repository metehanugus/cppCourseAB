/*Finding roots of a Quadratic Equation
Write an expression for finding a positive root of Quadratic equation

write only one positive formula at line

root1=*/


#include<cmath>
#include<iostream>
using namespace std;



float root(int a,int b,int c)
{
    float root1, root2;
    
    root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout << root1 << root2;
    return root1;
}

int main ()
{
    root(4,8,4);

}