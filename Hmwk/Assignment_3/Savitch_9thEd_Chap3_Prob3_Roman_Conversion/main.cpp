/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 18, 2021
 * Purpose:  Roman Numeral Conversion
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned short n2Cnvrt;
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>n2Cnvrt;
    if(n2Cnvrt>=1000&&n2Cnvrt<=3000){
    //Process or map Inputs to Outputs
        //Determine 1000's, 100's, 10's, 1's
        unsigned char n1000s,n100s,n10s,n1s;
        n1000s=n2Cnvrt/1000;
        n100s=(n2Cnvrt-n1000s*1000)/100;
        n10s=(n2Cnvrt-n1000s*1000-n100s*100)/10;
        n1s=n2Cnvrt%10;
        
        
        
        
        
        //Reiterate the input value
        cout<<n2Cnvrt<<" is equal to ";
        
        //Output the number of 1000's in Roman Numerals
        switch(n1000s){
            case 3:cout<<'M';
            case 2:cout<<'M';
            case 1:cout<<'M';
        }
        
        //Output the number of 100's
        cout<<(n100s==9?"CM":
               n100s==8?"DCCC":
               n100s==7?"DCC":
               n100s==6?"DC":
               n100s==5?"D":
               n100s==4?"CD":
               n100s==3?"CCC":
               n100s==2?"CC":
               n100s==1?"C":"");
        
        //Output the number of 10's
        if(n10s==9)cout<<"XC";
        if(n10s==8)cout<<"LXXX";
        if(n10s==7)cout<<"LXX";
        if(n10s==6)cout<<"LX";
        if(n10s==5)cout<<"L";
        if(n10s==4)cout<<"XL";
        if(n10s==3)cout<<"XXX";
        if(n10s==2)cout<<"XX";
        if(n10s==1)cout<<"X";
        
        //Output the number of 1's
        if(n1s==9)cout<<"IX";
        else if(n1s==8)cout<<"VIII";
        else if(n1s==7)cout<<"VII";
        else if(n1s==6)cout<<"VI";
        else if(n1s==5)cout<<"V";
        else if(n1s==4)cout<<"IV";
        else if(n1s==3)cout<<"III";
        else if(n1s==2)cout<<"II";
        else if(n1s==1)cout<<"I";
                
    //The Path to Exit
    }else{
        cout<< n2Cnvrt<< " is Out of Range!";
    }

    //Exit stage right!
    return 0;
}

