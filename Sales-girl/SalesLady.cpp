#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "SalesLady.h"
using namespace std;
SalesLady::SalesLady()
{
    for (int i = 0; i < monthsPerYear; i++) 
    {
        sales[i] = 0.0;
    }
    
}
string SalesLady::sayMonthName(int x)//this guy does not spell the months as 
{
    return monthName[x]; 
}
void SalesLady::getSalesFromUser()
{
    double salesFigure;
    for (int i = 1; i <= monthsPerYear; i++)
    {
        cout << "Enter sales amount for the month of " << sayMonthName(i-1) << ":" << endl;
        cin >> salesFigure;
        setSales(i,salesFigure);
    }
}
void SalesLady::setSales(int month, double amount)
{
    if (month >= 1 && month <= monthsPerYear && amount > 0)
    {
        sales[month - 1] = amount;
    }
    else
    {
        cout << "Invalid month or sales figure" << endl;
    }
}
void SalesLady::printAnnualSales()
{
    cout << setprecision(2) << fixed << "\nThe total annual sales are: $ " << totalAnnualSales() << endl;
}
double SalesLady::totalAnnualSales()
{
    double total = 0.0;//initializing the total
    for (int i = 0; i < monthsPerYear; i++) 
    {
        total += sales[i];
    }
    return total;
}
//SalesLady::SalesLady(const SalesLady& orig) {
//}
//
//SalesLady::~SalesLady() {
//}

