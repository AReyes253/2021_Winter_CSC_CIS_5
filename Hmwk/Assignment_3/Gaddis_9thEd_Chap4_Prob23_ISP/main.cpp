/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 18, 2021
 * Purpose:  ISP
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
    unsigned short  hours;
             float  mBill; //Monthly bill
              char pckage; //Subscription package
    
    //Initialize or input i.e. set variable values
    cout << "ISP Bill\n";
    cout << "Input Package and Hours\n";
    cin  >> pckage >> hours;

    //Map inputs -> outputs
    if ((pckage == 'A' || pckage == 'B' || pckage == 'C') && hours <= 744) {
        if (pckage == 'A') {
            if (hours <= 10) {
                mBill = 9.95f;    
            } else {
                mBill = 9.95f + ((hours - 10) * 2.00f);
            }
        } else if (pckage == 'B') {
            if (hours <= 20) {
                mBill = 14.95f;    
            } else {
                mBill = 14.95f + ((hours - 20) * 1.00f);
            }
        } else {
            mBill = 19.95f;
        } 
    }
    
    //Display the outputs
    cout << "Bill = $" << setw(6) << mBill;
    
    //Exit stage right or left!
    return 0;
    
}

