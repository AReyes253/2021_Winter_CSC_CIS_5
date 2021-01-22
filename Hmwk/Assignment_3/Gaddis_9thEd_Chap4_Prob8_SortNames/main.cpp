/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 17, 2021
 * Purpose:  SortNames
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1,
           name2,
           name3;
    //Initialize or input i.e. set variable values
    cout << "Sorting Names\n";
    cout << "Input 3 names\n";
    cin  >> name1; 
    cin  >> name2;
    cin  >> name3;
    //Map inputs -> outputs
    
    //Display the outputs
    if (name1 < name2 && name1 < name3) {
        
        cout << name1 << endl;
        
        (name2 < name3) ? cout << name2 << endl << name3 : 
                          cout << name3 << endl << name2;
                          
    } else if (name1 > name2 && name1 > name3) {
        
        (name2 < name3) ? cout << name2 << endl << name3 << endl : 
                          cout << name3 << endl << name2 << endl;
        cout << name1;
        
    } else {
        
        (name2 < name3) ? cout << name2 << endl << name1 << endl << name3 :
                          cout << name3 << endl << name1 << endl << name2;
                          
    }
    //Exit stage right or left!
    return 0;
}

