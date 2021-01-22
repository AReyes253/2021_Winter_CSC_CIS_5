/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 14, 2021
 * Purpose:  Average
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
    float t1,t2,t3,t4,t5, ave;
    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average.\n";
    cin >> t1 >> t2 >> t3 >> t4 >> t5;
    //Map inputs -> outputs
    ave = (t1 + t2 + t3 + t4 + t5) / 5;
    //Display the outputs
    
    cout << fixed << setprecision(1) << "The average = " << ave;
    //Exit stage right or left!
    return 0;
}

