/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 7:00 PM
 * Purpose: Mass and Weight
 */

//system level libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//use libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    int num1=rand()%899+100, // random number from 100 to 999
        num2=rand()%899+100, // random number from 100 to 999
        ans;                 // answer    
            
    //output problem
    cout<<setw(5)<<num1<<setw(5)<<endl;
    cout<<setw(2)<<"+"<<num2<<setw(5)<<endl;
    cout<<setw(5)<<"---"<<setw(5)<<endl;
    
    //input answer
    cin>>ans;
    
    //check answer and dispaly results
    if (ans==num1+num2)
        cout<<"Correct!";
    else
        cout<<"Incorrect.";
                

    return 0;
}

