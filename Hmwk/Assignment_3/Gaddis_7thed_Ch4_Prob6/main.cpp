/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 7:00 PM
 * Purpose: Mass and Weight
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
    int mass;//mass in kilograms of object
    
    //input data
    cout<<"Enter the mass (in kilograms) of the object\n";
    cin>>mass;
    
    //calculate
    float weight=mass*9.8;
    
    //output results
    cout<<"The weight in Newtons of th object is "<<weight<<endl;
    if (weight>1000)
        cout<<"The object is too heavy\n";
    if (weight<10)
        cout<<"The object is too light\n";

    return 0;
}

