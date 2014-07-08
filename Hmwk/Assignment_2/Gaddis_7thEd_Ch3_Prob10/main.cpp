/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 2, 2014, 11:19 PM
 * Purpose:Celsius to fehrenheit
 */

//system libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare the variables
    float cels;//temperature in celsius
    
    //input
    cout<<"Enter temperature in celsius"<<endl;
    cin>>cels;
    
    //calculate
    float fahren=18e-1*cels+32;
    
    //output the results
    cout<<"The temperature in fahrenheit is "<<fahren<<endl;
    
    return 0;
}

