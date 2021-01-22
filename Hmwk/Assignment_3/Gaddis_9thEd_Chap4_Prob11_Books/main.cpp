/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 17, 2021
 * Purpose:  Books
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
    unsigned  bksPurc; //Books purchased in a month
    
    //Initialize or input i.e. set variable values
    cout << "Book Worm Points\n";
    cout << "Input the number of books purchased this month.\n";
    cin  >> bksPurc;
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Books purchased =" << setw(3) << bksPurc << endl;
    
    if (bksPurc == 0) {
        cout << "Points earned   =" << setw(3) << 0;        
    } else if (bksPurc == 1) {
        cout << "Points earned   =" << setw(3) << 5;   
    } else if (bksPurc == 2) {
        cout << "Points earned   =" << setw(3) << 15;   
    } else if (bksPurc == 3) {
        cout << "Points earned   =" << setw(3) << 30;   
    } else {
        cout << "Points earned   =" << setw(3) << 60;   
    }
    //Exit stage right or left!
    return 0;
}

