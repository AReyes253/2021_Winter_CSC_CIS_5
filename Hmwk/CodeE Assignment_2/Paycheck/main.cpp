/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 16, 2021
 * Purpose:  Paycheck
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
    float payRate, //Hourly pay rate in dollars
          doblPay, //Double time pay for hours greater than 40
          hrWorkd, //Hours worked
          ovrTime, //Over time hours worked
          grosPay; //Pay before taxes
          
    //Initialize or input i.e. set variable values
    cout << "This program calculates the gross paycheck.\n";
    cout << "Input the pay rate in $'s/hr and the number of hours.\n";
    cin  >> payRate >> hrWorkd;
    
    //Map inputs -> outputs
    doblPay = payRate * 2;
    ovrTime = hrWorkd - 40;

    if (hrWorkd <= 40) {
        grosPay = payRate * hrWorkd;    
    } else {
        grosPay = (payRate * (hrWorkd - ovrTime)) + (doblPay * ovrTime);
    }
    
    //Display the outputs
    cout <<  fixed << setprecision(2);
    cout << "Paycheck = $" << setw(7) << grosPay;
    return 0;
}

