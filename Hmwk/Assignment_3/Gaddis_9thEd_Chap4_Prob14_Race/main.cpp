/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 17, 2021
 * Purpose:  Race
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
    unsigned time1,
             time2,
             time3;
             
      string run1, 
             run2,
             run3;
           
    //Initialize or input i.e. set variable values
    cout << "Race Ranking Program\n";
    cout << "Input 3 Runners\n";
    cout << "Their names, then their times\n";
    cin  >> run1 >> time1;
    cin  >> run2 >> time2;
    cin  >> run3 >> time3;
    
    //Display the outputs
    
    if (time3 < time1 && time3 < time2) {
        cout << run3 << "\t" << setw(3) << time3 << endl;
        
        (time2 < time1) ? cout << run2 << "\t" << setw(3) << time2 << endl
                               << run1 << "\t" << setw(3) << time1:
                             
                          cout << run1 << "\t" << setw(3) << time1 << endl
                               << run2 << "\t" << setw(3) << time2;
    
    } else if (time3 > time1 && time3 > time2) {
        
        (time2 < time1) ? cout << run2 << "\t" << setw(3) << time2 << endl
                               << run1 << "\t" << setw(3) << time1 << endl:
                               
                          cout << run1 << "\t" << setw(3) << time1 << endl
                               << run2 << "\t" << setw(3) << time2 << endl;
                             
        cout << run3 << "\t" << setw(3) << time3;
        
    } else {
        
        (time2 < time1) ? cout << run2 << "\t" << setw(3) << time2 << endl
                               << run3 << "\t" << setw(3) << time3 << endl
                               << run1 << "\t" << setw(3) << time1:
                             
                          cout << run1 << "\t" << setw(3) << time1 << endl
                               << run3 << "\t" << setw(3) << time3 << endl
                               << run2 << "\t" << setw(3) << time2;    
                             
    }
    //Exit stage right or left!
    return 0;
}

