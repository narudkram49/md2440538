/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 7:00 PM
 * Purpose: Minimum/Maximum
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
    int num1,//first number
        num2;//second number
    
    //input data
    cout<<"Enter first number\n";
    cin>>num1;
    cout<<"Enter second Number\n";
    cin>>num2;
    
    //calculate results
    num1>num2 ? cout<<"The first number is larger\n" : 
        cout<<"The second number is larger\n";
    

    return 0;
}

