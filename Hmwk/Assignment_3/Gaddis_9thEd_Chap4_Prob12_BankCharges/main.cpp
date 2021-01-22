/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 17, 2021
 * Purpose:  BankCharges
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
    unsigned short chkWrit;  //Checks written
             float chkFee,   //Checks written fee 
                   mnlyFee,  //Monthly Fee
                   lowbFee,  //Fee if account falls beloow 400
                   newBal,   //New balance afters fees
                   bankBal;  //Current bank balance in dollars
    
    //Initialize or input i.e. set variable values
    cout << "Monthly Bank Fees\n";
    cout << "Input Current Bank Balance and Number of Checks\n";
    cin  >> bankBal;
    cin  >> chkWrit;
    
    mnlyFee = 10.00f;
    
    (bankBal < 400) ? lowbFee = 15.00f:
                      lowbFee =  0.00f;
        
    if (chkWrit < 20) {
        chkFee = chkWrit * 0.10f;
    } else if (chkWrit < 39) {
        chkFee = chkWrit * 0.08f;
    } else if (chkWrit < 59) {
        chkFee = chkWrit * 0.06f;
    } else {
        chkFee = chkWrit * 0.04f;
    }
    //Map inputs -> outputs
    newBal = bankBal - mnlyFee - lowbFee - chkFee;
    
    //Display the outputs
    cout << fixed << setprecision(2);
    cout << "Balance     $" << setw(9) << bankBal << endl;
    cout << "Check Fee   $" << setw(9) << chkFee  << endl;
    cout << "Monthly Fee $" << setw(9) << mnlyFee << endl;
    cout << "Low Balance $" << setw(9) << lowbFee << endl;
    cout << "New Balance $" << setw(9) << newBal;
    //Exit stage right or left!
    return 0;
}

