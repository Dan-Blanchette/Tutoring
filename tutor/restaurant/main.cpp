/**
 * @file main.cpp
 * @author Dan Blanchette
 * @brief This program will calculte sales tax and tip based on how much the user's bill
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


float salesTax(float cost);
float tip(float cost);
void printout(float tip, float cost, float tax);


int main()
{

    // * What we know...... *
    float cost = 44.50; // - The patron spent $44.50
    float newCost = 0;
    float withTip = 0;
    // - The state tax is 6.75% of the meal cost
    // - The tip should be 15% of the meal cost after adding in the tip

    newCost = salesTax(cost);
    cout << newCost << "\n";
    withTip = tip(cost);
    cout << withTip << "\n";
    printout(withTip, cost, newCost);
    
    //   We need to accomplish

    // - display the meal cost
    // - display the tax amount
    // - display the tip amount
    // - and the bill total on screen of all costs

    return 0;
}

/**
 * @brief this function will multiply the cost by the tax rate
 * 
 * @param cost 
 * @return int 
 */
float salesTax(float cost)
{
    float tax = cost * .0675;
    return tax;
}

/**
 * @brief function that will calculate and return the tip
 * 
 * @param cost 
 * @return int 
 */
float tip(float cost)
{
    float withTip = cost * .15;
    return withTip;
}

/**
 * @brief This function will print out all data
 * 
 * @param tip 
 * @param cost 
 * @param tax 
 */
void printout(float tip, float cost, float tax)
{
    float total = cost + tax + tip;
    cout << "Here is the original cost: " << showpoint << setprecision(4) << cost << "\n";
    cout << "Here is the bill's sales tax: " << showpoint << setprecision(3) << tax << "\n"; 
    cout << "Here is the bill's tip: " << showpoint << setprecision(3) << tip << "\n";
    cout << "---------------------------------------- \n"; 
    cout << "The new total with tax and tip is: " << showpoint << setprecision(4) << total << "\n\n";  
}