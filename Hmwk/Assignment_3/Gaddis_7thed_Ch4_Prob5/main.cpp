/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 7:00 PM
 * Purpose: Body Mass Index
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
    int weight,
        height;    
    
    //input data
    cout<<"Enter your height (in inches)\n";
    cin>>height;
    cout<<"Enter your weight(in pounds)\n";
    cin>>weight;
    
    int bmi = weight*703/(height*height);
    
    cout<<"Your BMI is "<<bmi<<endl;
    if (bmi>=18 <=25)
        cout<<"You are in optimal weight range";
    else if (bmi<18)
        cout<<"You are underweight\n";
    else if (bmi>25)
        cout<<"You are overveight\n";
    
    
    return 0;
}

