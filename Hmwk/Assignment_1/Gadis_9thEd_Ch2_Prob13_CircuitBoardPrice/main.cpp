/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created on January 10
 * Purpose: Circuit Board Price
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
    float profit, //Percent profit
           board, //Cost of board in dollars
           price;
    //Initialize Variables
    profit = .35;
    board  = 14.95;
    //Map Inputs to Outputs -> Process
    price = board + (board * profit);
    //Display Inputs/Outputs
    cout << "Selling price: " << price;
    //Exit the Program - Cleanup
    return 0;
}