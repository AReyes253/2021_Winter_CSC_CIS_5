/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 18, 2021
 * Purpose:  CompatibleSigns
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
    string sign1E, //Sign1 element
            sign1,
           sign2E, //Sign2 element
            sign2;
         
    //Initialize or input i.e. set variable values
    cout << "Horoscope Program which examines compatible signs.\n";
    cout << "Input 2 signs.\n";
    cin  >> sign1;
    cin  >> sign2;
    
    if ((sign1 == "Aries") || (sign1 == "Leo") || (sign1 == "Sagittarius")) {
        sign1E = "Fire";
    } else if ((sign1 == "Taurus") || (sign1 == "Virgo") || (sign1 == "Capricorn")) {
        sign1E = "Earth";
    } else if ((sign1 == "Gemini") || (sign1 == "Libra") || (sign1 == "Aquarius")) {
        sign1E = "Air";    
    } else {
        sign1E = "Water";
    }
    
    if ((sign2 == "Aries") || (sign2 == "Leo") || (sign2 == "Sagittarius")) {
        sign2E = "Fire";
    } else if ((sign2 == "Taurus") || (sign2 == "Virgo") || (sign2 == "Capricorn")) {
        sign2E = "Earth";
    } else if ((sign2 == "Gemini") || (sign2 == "Libra") || (sign2 == "Aquarius")) {
        sign2E = "Air";    
    } else {
        sign2E = "Water";
    }
    //Map inputs -> outputs
    
    //Display the outputs
    if (sign1E == sign2E) {
        cout << sign1 << " and " << sign2 << " are compatible " << sign1E << " signs.";
    } else {
        cout << sign1 << " and " << sign2 << " are not compatible" << " signs.";   
    }
    //Exit stage right or left!
    return 0;
}

