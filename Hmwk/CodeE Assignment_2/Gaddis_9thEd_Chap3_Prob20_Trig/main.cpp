/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 14, 2021
 * Purpose:  Temp
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
    float F, //Fahrenheit
          C; //Celsius
          
    //Initialize or input i.e. set variable values
    cout << "Temperature Converter\n";
    cout << "Input Degrees Fahrenheit\n";
    cin  >> F;
    
    //Map inputs -> outputs
    C = 5.0 / 9.0 * (F-32.0);
    
    //Display the outputs
    cout << fixed << setprecision(1);
    cout << F << " Degrees Fahrenheit = " << C << " Degrees Centigrade";
    
    //Exit stage right or left!
    return 0;
}

