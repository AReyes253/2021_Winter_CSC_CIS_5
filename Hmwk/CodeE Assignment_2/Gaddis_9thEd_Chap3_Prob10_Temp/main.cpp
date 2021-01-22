/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 16, 2021
 * Purpose:  Temp
 */


//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = 4 * atan(1);
const float CNVSN = PI/ 180; //Conversion from radians to degrees
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle; //Angle in degrees
    
    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions\n";
    cout << "Input the angle in degrees.\n";
    cin  >> angle;
    
    //Map inputs -> outputs
    //angle *= CNVSN;
    //Display the outputs
    cout << fixed;
    cout << "sin(" << setprecision(0) << angle << ") = " << setprecision(4) << sin(angle * CNVSN) << endl;
    cout << "cos(" << setprecision(0) << angle << ") = " << setprecision(4) << cos(angle * CNVSN) << endl;
    cout << "tan(" << setprecision(0) << angle << ") = " << setprecision(4) << tan(angle * CNVSN);
    
    //Exit stage right or left!
    return 0;
}

