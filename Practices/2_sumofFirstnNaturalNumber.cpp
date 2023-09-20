/*Sum of First n Natural Number
Write an expression for finding sum of first n Natural numbers

just write the formula at line

sum=*/

#include <iostream>
using namespace std;


int main ()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int sum= n*(n+1)/2;
    cout << "Sum of first " << n << " natural numbers is " << sum;
    
    return 0;
}