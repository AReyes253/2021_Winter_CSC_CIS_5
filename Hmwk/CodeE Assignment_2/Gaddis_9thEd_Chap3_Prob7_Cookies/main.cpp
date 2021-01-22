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
    //40 cookies/Bag, 10 serving/bag, 1 serving/300cal
    unsigned short cookies, 
                       cal;  //Caliores of cookies eaten;
                       
    //Initialize or input i.e. set variable values
    cout << "Calorie Counter\n";
    cout << "How many cookies did you eat?\n";
    cin  >> cookies;
    
    //Map inputs -> outputs
    cal = cookies * (300/4);
    
    //Display the outputs
    cout << "You consumed " << cal << " calories.";
    //Exit stage right or left!
    return 0;
}

