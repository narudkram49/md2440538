/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Purpose: Miles per Gallon
 * Created on June 30, 2014, 12:14 PM
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
    float gallons;//fuel capacity in gallons
    float miles;//total miles traveled on a full tank
    float mpg;//miles per gallon
    
    //input
    cout<<"How many gallons does the fuel tank hold?"<<endl;
    cin>>gallons;
    cout<<"How many miles can be travels on a full tank?"<<endl;
    cin>>miles;
    
    //calculate variable
    mpg = miles / gallons;
    
    //output results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your miles per gallon is "<<mpg<<endl;
    return 0;
}

