/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 16, 2021
 * Purpose:  Dieters Dilemma
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVGRMS=453.592;//Grams/lb

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float wDsrd, //Desired Weight in lbs
          mMouse,//Mass of the mouse in grams
          mKmse, //Mass of chemicals that result in termination
          mSoda, //Mass of Liquid in Soda Can
          cnSint8;//Concentration of Chemical in Soda Can
    int nCans;//The limit of the number of cans of coke to drink
    
    //Initialize Variables
    mMouse=35;//35 grams
    mKmse=5;//5 grams
    mSoda=350;//350 grams
    cnSint8=1e-3f;//.001 Concentration
    
    //Process or map Inputs to Outputs
    cout << "Program to calculate the limit of Soda Pop Consumption.\n";
    cout << "Input the desired dieters weight in lbs.\n";
    cin  >> wDsrd;
    
    nCans=wDsrd*CNVGRMS*mKmse/(mMouse*mSoda*cnSint8);
    
    //Display Outputs
    cout << "The maximum number of soda pop cans\n";
    cout <<  "which can be consumed is " << nCans << " cans";
    //Exit stage right!
    return 0;
}

