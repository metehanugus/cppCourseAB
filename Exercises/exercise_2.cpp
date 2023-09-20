/* Write a program to calculate Net Salary Program
should take following as input
1. Basic Salary
2. Percentage of Allowances
3. Percantage of Deductions*/

#include <iostream>
using namespace std;

int main ()
{
    float basicSalary, percentageOfAllowances, percentageOfDeductions;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Percentage of Allowances: ";
    cin >> percentageOfAllowances;
    cout << "Enter Percentage of Deductions: ";
    cin >> percentageOfDeductions;
    float netSalary;
    netSalary = basicSalary + basicSalary*percentageOfAllowances/100 - basicSalary*percentageOfDeductions/100;
    cout << "Net Salary is " << netSalary;
    return 0;
}