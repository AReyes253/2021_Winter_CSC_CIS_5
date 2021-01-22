/* 
 * File:   main.cpp
 * Author: Angel Reyes
 * Created: January 19, 2021
 * Purpose: Menu 
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu"<<endl;
    cout<<"Type 1 for Gadds Sort Names Proglem"<<endl;
    cout<<"Type 2 for Gaddis Books Problem"<<endl;
    cout<<"Type 3 for Gadds Bank Charges Problem"<<endl;
    cout<<"Type 4 for Gadds Race Proglem"<<endl;
    cout<<"Type 5 for Gaddis ISP Problem"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 7 for Savitch Roman Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch Compatible Signs Problem"<<endl;
    cin >>choice;
    cout << "-------------------------------" << endl;
    if (choice=='1'){
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
        cout << "-------------------------------" << endl;
        //Map inputs -> outputs
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
       
        //Exit stage right!
    } else if (choice=='2') {
        //Declare Variables
        unsigned  bksPurc; //Books purchased in a month

        //Initialize or input i.e. set variable values
        cout << "Book Worm Points\n";
        cout << "Input the number of books purchased this month.\n";
        cin  >> bksPurc;
        cout << "-------------------------------" << endl;

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
        //Exit stage right!
    } else if (choice=='3') {
        //Declare Variables
        unsigned short chkWrit;  //Checks written
                 float chkFee,   //Checks written fee 
                       mnlyFee,  //Monthly Fee
                       lowbFee,  //Fee if account falls beloow 400
                       newBal,   //New balance afters fees
                       bankBal;  //Current bank balance in dollars

        //Initialize or input i.e. set variable values
        cout << "Monthly Bank Fees\n";
        cout << "Input Current Bank Balance and Number of Checks\n";
        cin  >> bankBal;
        cin  >> chkWrit;
        cout << "-------------------------------" << endl;        
        mnlyFee = 10.00;

        (bankBal < 400) ? lowbFee = 15.00:
                          lowbFee =  0.00;

        if (chkWrit < 20) {
            chkFee = chkWrit * 0.10;
        } else if (chkWrit < 39) {
            chkFee = chkWrit * 0.08;
        } else if (chkWrit < 59) {
            chkFee = chkWrit * 0.06;
        } else {
            chkFee = chkWrit * 0.04;
        }
        //Map inputs -> outputs
        newBal = bankBal - mnlyFee - lowbFee - chkFee;

        //Display the outputs
        cout << fixed << setprecision(2);
        cout << "Balance     $" << setw(9) << bankBal << endl;
        cout << "Check Fee   $" << setw(9) << chkFee  << endl;
        cout << "Monthly Fee $" << setw(9) << mnlyFee << endl;
        cout << "Low Balance $" << setw(9) << lowbFee << endl;
        cout << "New Balance $" << setw(9) << newBal;
        //Exit stage right!
    } else if (choice=='4') {
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
        cout << "-------------------------------" << endl;
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
        //Exit stage right!
    } else if (choice=='5') {
        //Declare Variables
        unsigned short  hours;
                 float  mBill; //Monthly bill
                  char pckage; //Subscription package

        //Initialize or input i.e. set variable values
        cout << "ISP Bill\n";
        cout << "Input Package and Hours\n";
        cin  >> pckage >> hours;
        cout << "-------------------------------" << endl;

        //Map inputs -> outputs
        if ((pckage == 'A' || pckage == 'B' || pckage == 'C') && hours <= 744) {
            if (pckage == 'A') {
                if (hours <= 10) {
                    mBill = 9.95f;    
                } else {
                    mBill = 9.95f + ((hours - 10) * 2.00f);
                }
            } else if (pckage == 'B') {
                if (hours <= 20) {
                    mBill = 14.95f;    
                } else {
                    mBill = 14.95f + ((hours - 20) * 1.00f);
                }
            } else {
                mBill = 19.95f;
            } 
        }

        //Display the outputs
        cout << "Bill = $" << setw(6) << mBill;

        //Exit stage right or left!
    } else if (choice=='6') {
        //Declare Variables
        char p1, //Player 1
             p2; //Player 2

        //Initialize or input i.e. set variable values
        cout << "Rock Paper Scissors Game\n";
        cout << "Input Player 1 and Player 2 Choices\n";
        cin  >> p1;
        cin  >> p2;
        cout << "-------------------------------" << endl;
        //Map inputs -> outputs

        //Display the outputs

        if ((p1 == 'R' || p1 == 'r') && (p2 == 'S' || p2 == 's')) {
            cout << "Rock breaks scissors.";   
        } else if ((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r')) {
            cout << "Paper covers rock.";
        } else if ((p1 == 'S' || p1 == 's') && (p2 == 'P' || p2 == 'p')) {
            cout << "Scissors cuts paper.";   
        } else if ((p2 == 'R' || p2 == 'r') && (p1 == 'S' || p1 == 's')) {
            cout << "Rock breaks scissors.";   
        } else if ((p2 == 'P' || p2 == 'p') && (p1 == 'R' || p1 == 'r')) {
            cout << "Paper covers rock.";
        } else {
            cout << "Scissors cuts paper.";   
        }

        //Exit stage right or left!
    } else if (choice=='7') {
        //Declare Variable Data Types and Constants
        unsigned short n2Cnvrt;

        //Initialize Variables
        cout<<"Arabic to Roman numeral conversion."<<endl;
        cout<<"Input the integer to convert."<<endl;
        cin>>n2Cnvrt;
        cout << "-------------------------------" << endl;
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
    } else if (choice=='8') {
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
        cout << "-------------------------------" << endl;
        
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
    } else  {
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}
