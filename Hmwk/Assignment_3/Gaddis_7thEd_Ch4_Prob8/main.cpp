/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 11:14 AM
 * Purpose: Change for dollar game
 */

//system level libraries
#include <iostream>
using namespace std;

//use libraries

//global constants
int PENNY   = 1,
    NICKEL  = 5, 
    DIME    = 10,
    QUARTER = 25;

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //define variables
    int numPen,  //number of pennies
        numNick, //number of nickels
        numDim,  //number of dimes
        numQrt;  //number of quarters
    
    //input data
    cout<<"Enter number of pennies\n";
    cin>>numPen;
    cout<<"Enter number of nickels\n";
    cin>>numNick;
    cout<<"Enter number of dimes\n";
    cin>>numDim;
    cout<<"Enter the number of quarters\n";
    cin>>numQrt;
    
    //calculate results
    int totPen=numPen*PENNY,
        totNick=numNick*NICKEL,
        totDim=numDim*DIME,
        totQrt=numQrt*QUARTER;
    
    int total=totPen+totNick+totDim+totQrt;
    
    //output results
    if (total==100)
        cout<<"Congratulations, you've won the game :D\n";
    else
        cout<<"Sorry the change does not equal a dollar :(\n";
    return 0;
}

