/* 
 * File:   main.cpp
 * Author: Mark
 * Created on July 2, 2014, 11:30 PM
 * Purpose:Currency
 */

//system libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//global constants
float YEN_PER_DOLLAR=10190e-2;
float EUROS_PER_DOLLAR=73e-2;
//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare the variables
    float usd;//dollar amount
    
    //input
    cout<<"Enter dollar amount"<<endl;
    cin>>usd;
    
    //calculations
    float yen=usd*YEN_PER_DOLLAR;
    float euro=usd*EUROS_PER_DOLLAR;
    
    //output the results
    cout<<showpoint<<fixed<<setprecision(2);
    cout<<"The dollar amount in yen is "<<yen<<endl;
    cout<<"the dollar amount in euros is "<<euro<<endl;

    return 0;
}

