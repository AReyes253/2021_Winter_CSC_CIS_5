/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created on January 10
 * Purpose: Miles per Gallon
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
    float gallons,
            miles,
              mpg; //Miles Per Gallon
    //Initialize Variables
    gallons = 15;
    miles   = 375;
    //Map Inputs to Outputs -> Process
    mpg = miles / gallons;
    //Display Inputs/Outputs
    cout << "Miles per Gallon: " << mpg;
    //Exit the Program - Cleanup
    return 0;
}