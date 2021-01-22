/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created on January 10
 * Purpose: Average of Values
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
    short valuSum,  //Sum of the values
          value1,
          value2,
          value3,
          value4,
          value5;   
    //Initialize Variables
    value1 = 28;
    value2 = 32;
    value3 = 37;
    value4 = 24;
    value5 = 33;
    //Map Inputs to Outputs -> Process
    valuSum = value1 + value2 + value3 + value4 + value5;
    //Display Inputs/Outputs
    cout << "Average of values: " << valuSum / 5;
    //Exit the Program - Cleanup
    return 0;
}