/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 12:09 AM
 * Purpose: 
 */

//system level libraries
#include <iostream>
using namespace std;

//use libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //define variables
    int numBook;//number of books purchased
    
    //input data
    cout<<"How many books have you purchased this month?\n";
    cin>>numBook;
    
    //output results
    if (numBook==0)
        cout<<"Your total book club points for this month is 0\n";
    else if (numBook==1)
        cout<<"Your total book club points for this month is 5\n";
    else if (numBook==2)
        cout<<"Your total book club points for this month is 15\n";
    else if (numBook==3)
        cout<<"Your total book club points for this month is 30\n";
    else if (numBook>=4)
        cout<<"Your total book club points for this month is 60\n";

    return 0;
}

