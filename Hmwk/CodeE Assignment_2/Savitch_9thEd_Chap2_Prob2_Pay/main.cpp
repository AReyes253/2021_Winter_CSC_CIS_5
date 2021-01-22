/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 16, 2021
 * Purpose:  Pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float preSal,  //Previous annual salary
          naSal,   //New annual salary
          nmSal,   //New monthly salary
          rtroPay; //6 months retroactive pay increase
          
    //Initialize or input i.e. set variable values
    cout << "Input previous annual salary.\n";
    cin  >> preSal;
    
    //Map inputs -> outputs
    cout << fixed << setprecision(2);
    rtroPay = (0.076 * preSal) / 2;
    naSal = preSal + rtroPay * 2;
    nmSal = naSal / 12;
    
    //Display the outputs
    cout << "Retroactive pay    = $" << setw(7) << rtroPay << endl;
    cout << "New annual salary  = $" << setw(7) << naSal << endl;
    cout << "New monthly salary = $" << setw(7) << nmSal;
    //Exit stage right or left!
    return 0;
}

