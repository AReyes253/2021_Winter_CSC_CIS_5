/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created on January 10
 * Purpose: Lab Budget Percentage
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
    float   milBdgt,    //Military budget in dollars
            fedBdgt,    //Federal budget in dollars
            mlPrcnt;    //Military budget percentage of federal budget
    //Initialize Variables
    milBdgt=7.0e11f;    //Military Budget = 700 Billion   
    fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion
    //Map Inputs to Outputs -> Process
    mlPrcnt = (milBdgt/fedBdgt) * 100;
    //Display Inputs/Outputs
    cout << "The military budget is " << mlPrcnt << "% of the federal budget.";
    //Exit the Program - Cleanup
    return 0;
}

