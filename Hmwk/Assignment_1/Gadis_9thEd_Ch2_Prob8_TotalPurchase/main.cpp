/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created on January 10
 * Purpose: Total Purchases
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants

//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float subTotl, //Total before tax 
          saleTax, //Amount of sales tax
          item1, 
          item2, 
          item3, 
          item4, 
          item5;
          
    //Initialize Variables
    item1 = 15.95; //Item prices in dollars
    item2 = 24.95;
    item3 = 6.95;
    item4 = 12.94;
    item5 = 3.95;
    //Map Inputs to Outputs -> Process
    subTotl = item1 + item2 + item3 + item4 + item5;
    saleTax = subTotl * .07;
    //Display Inputs/Outputs
    cout << "Item1 Price: " << item1 << endl;
    cout << "Item2 Price: " << item2 << endl;
    cout << "Item3 Price: " << item3 << endl;
    cout << "Item4 Price: " << item4 << endl;
    cout << "Item5 Price: " << item5 << endl;
    cout << "Sub-Total: "   << subTotl << endl;
    cout << "Sales-Tax: "   << saleTax << endl;
    cout << "Total-Price: " << subTotl + saleTax << "$";
    //Exit the Program - Cleanup
    return 0;
}