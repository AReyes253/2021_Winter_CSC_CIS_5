/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 16, 2021
 * Purpose:  Room
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
    unsigned short maxCap,  //Maximum room capacity
                   pplAtt,  //Number of people attending
                   spceAv,  //Space available left in room
                   capOver; //Capacity overflow
                   
    //Initialize or input i.e. set variable values
    cout << "Input the maximum room capacity and the number of people\n";
    cin  >> maxCap >> pplAtt;
    

    //Map inputs -> outputs
    spceAv  = maxCap - pplAtt;
    capOver = pplAtt - maxCap;
    
    //Display the outputs
    if (pplAtt <= maxCap) {
        cout << "Meeting can be held.\n";
        cout << "Increase number of people by "; 
        cout << spceAv << " will be allowed without violation.";
    } else {
        cout << "Meeting cannot be held.\n";
        cout << "Reduce number of people by ";
        cout << capOver << " to avoid fire violation.";
    }
    
    //Exit stage right or left!
    return 0;
}

