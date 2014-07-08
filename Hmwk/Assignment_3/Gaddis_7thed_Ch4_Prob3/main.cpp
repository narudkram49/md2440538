/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 7:00 PM
 * Purpose: Magic Dates
 */

//system level libraries
#include <iostream>
using namespace std;

//use libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    int month,
        day,
        year;

    //input data
    cout<<"Enter a month number\n";
    cin>>month;
    cout<<"Enter a day number\n";
    cin>>day;
    cout<<"Enter a year number (two digits) \n";
    cin>>year;
    
    //calculate
    int moDy=month*day;
    
    //output results
    if (moDy==year)
        cout<<"This date is magic!\n";
    else
        cout<<"This date is not magic\n";

    return 0;
}

