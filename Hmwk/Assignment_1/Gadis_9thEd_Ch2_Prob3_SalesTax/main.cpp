/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created on January 10
 * Purpose: Sales Tax
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
    float cntyTax,  //County sales tax
          totlTax,  //Total sales tax
          steTax,   //State sales tax
          cost;     //Purchase in dollars
    //Initialize Variables
    cntyTax = 0.02;
    steTax  = 0.04;
    cost    = 95.0;
    //Map Inputs to Outputs -> Process
    totlTax = cost * (steTax + cntyTax);
    //Display Inputs/Outputs
    cout << "Total sales tax: " << totlTax;
    //Exit the Program - Cleanup
    return 0;
}