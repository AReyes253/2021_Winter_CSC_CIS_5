/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 14, 2021
 * Purpose:  Cookies
 */


//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float insrnce, //Insurance
             cost; //Replacement cost of a building
                
    //Initialize or input i.e. set variable values
    cout << "Insurance Calculator\n";
    cout << "How much is your house worth?\n";
    cin  >> cost;
    
    //Map inputs -> outputs
    insrnce = .80 * cost;
    //Display the outputs
    cout << "You need $" << insrnce << " of insurance.";
    //Exit stage right or left!
    return 0;
}

