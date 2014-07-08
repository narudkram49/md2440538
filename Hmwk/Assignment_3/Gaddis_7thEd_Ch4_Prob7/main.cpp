/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 10:30 AM
 * Purpose: Time Calculator
 */

//system level libraries
#include <iostream>
using namespace std;

//use libraries

//global constants
int minute=60;
int hour=3600;
int day=86400;


//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //define variables
    int second;
    
    //input
    cout<<"Enter a number of seconds"<<endl;
    cin>>second;
    
    //calculate results
    if (second<=60)
        cout<<"Seconds in minutes = "<<second/minute<<endl;
    else if (second<=3600)
        cout<<"Seconds in hours = "<<second/hour<<endl;
    else if (second<=86400)            
        cout<<"Seconds in days = "<<second/day<<endl;

    return 0;
}

