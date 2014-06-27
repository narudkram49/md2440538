/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 26, 2014, 10:30 PM
 * Purpose: Miles per Gallon
 */

//system libraries
#include <iostream>
#include <iomanip>
using namespace std;

//use libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare and initialize variables
    float ttlGal=12;//Total tank capacity in gallons
    float maxMil=350;//Max miles driven before refuel
    float mpg=maxMil/ttlGal;//Miles per gallon
    
    //output the results
    cout<<"Miles per gallon = "<<mpg<<endl;

    return 0;
}

