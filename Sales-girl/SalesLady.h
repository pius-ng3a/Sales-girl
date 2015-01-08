/* 
 * File:   SalesLady.h
 * Author: n4sjr
 *
 * Created on January 5, 2015, 12:41 PM
 */
#include <string>
using namespace std;
#ifndef SALESLADY_H
#define	SALESLADY_H

class SalesLady {
public:
    static const int monthsPerYear = 12;
    string monthName[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    SalesLady();//contructor
//    SalesLady(const SalesLady& orig);
//    virtual ~SalesLady();
    void getSalesFromUser();//input sales from the keyboard
    void setSales(int, double);//set sales for a specific month
    void printAnnualSales();//summarize and print sales
    string sayMonthName(int );
private:
    double totalAnnualSales();//prototype for utility function
    double sales [monthsPerYear];//12 monthly sales amounts
    int x;
};

#endif	/* SALESLADY_H */

