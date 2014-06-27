/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 26, 2014, 10:30 PM
 * Purpose: Circuit Board Price
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
    float price=12.67;//Price of circuit board
    float profit=.40;//Profit percent
    float sllPrc=(price*profit)+price;//Selling price
    
    //output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Sale Price = "<<sllPrc<<endl;

    return 0;
}

