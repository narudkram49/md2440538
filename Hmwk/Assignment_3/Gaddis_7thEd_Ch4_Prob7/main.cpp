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
int MINUTE = 60,    //seconds in minute
    HOUR   = 3600,  //seconds in hour
    DAY    = 86400; //seconds in day


//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //define variables
    int second;//
    
    //input
    cout<<"Enter a number of seconds"<<endl;
    cin>>second;
    
    //calculate and output results
    if (second>=60)
        cout<<"Seconds in minutes = "<<second/MINUTE<<endl;
    
    if (second>=3600)
        cout<<"Seconds in hours   = "<<second/HOUR<<endl;
    
    if (second>=86400)            
        cout<<"Seconds in days    = "<<second/DAY<<endl;

    return 0;
}

