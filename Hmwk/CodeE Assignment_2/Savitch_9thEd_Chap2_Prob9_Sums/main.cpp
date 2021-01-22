/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 16, 2021
 * Purpose:  Sums
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
    int n0, n1, 
        n2, n3, 
        n4, n5, 
        n6, n7, 
        n8, n9, 
        sumNeg, //Sum of negative numbers
        sumPos, //Sum of positive numbers
        sumTot; //Sum of sumPos and sumNeg
          
    //Initialize or input i.e. set variable values
    sumNeg = 0;
    sumPos = 0;
    
    cout << "Input 10 numbers, any order, positive or negative\n";
    cin  >> n0 >> n1 
         >> n2 >> n3 
         >> n4 >> n5 
         >> n6 >> n7 
         >> n8 >> n9;
    
    //Map inputs -> outputs
    (n0 > 0) ? sumPos += n0 : sumNeg += n0; 
    (n1 > 0) ? sumPos += n1 : sumNeg += n1; 
    (n2 > 0) ? sumPos += n2 : sumNeg += n2; 
    (n3 > 0) ? sumPos += n3 : sumNeg += n3; 
    (n4 > 0) ? sumPos += n4 : sumNeg += n4; 
    (n5 > 0) ? sumPos += n5 : sumNeg += n5; 
    (n6 > 0) ? sumPos += n6 : sumNeg += n6; 
    (n7 > 0) ? sumPos += n7 : sumNeg += n7; 
    (n8 > 0) ? sumPos += n8 : sumNeg += n8; 
    (n9 > 0) ? sumPos += n9 : sumNeg += n9; 
    sumTot = sumPos + sumNeg;
    
    //Display the outputs
    cout << fixed;
    cout << "Negative sum =" << setw(4) << sumNeg << endl;
    cout << "Positive sum =" << setw(4) << sumPos << endl;
    cout << "Total sum    =" << setw(4) << sumTot;
    
    //Exit stage right or left!
    return 0;
}

