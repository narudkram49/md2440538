/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 2, 2014, 10:10 PM
 * Purpose: How many widgets
 */

//system level libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//global constants

//function prototypes

//execution begins her
int main(int argc, char** argv) {
    //define variables
    float wdgtWt=92e-1;//widget weight
    float plltWt;//Pallet weight
    float ttlWt;//Pallet loaded with widgets weight
    
    //input
    cout<<"What is the weight of the pallet without widgets?"<<endl;
    cin>>plltWt;
    cout<<"What is the weight if the pallet with widgets?"<<endl;
    cin>>ttlWt;
    
    //calculations
    float numWdgt=(ttlWt-plltWt)/wdgtWt;
    
    //output results
    cout<<"The number of widgets on that pallet is "<<numWdgt<<endl;

    return 0;
}

