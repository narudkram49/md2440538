/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 26, 2014, 9:25 PM
 * Purpose:Restaurant Bill
 */

//system level libraries
#include <iostream>
#include <iomanip>
using namespace std;

// use libraries

//global constraints

//function prototypes

//execution begin here
int main(int argc, char** argv) {
    float sbTtl=44.50;//Subtotal
    float tax=.0675;//Tax percentage
    float tip=.15;//Tip Percentage
    float txTtl=(sbTtl*tax);//Tax Amount
    float tipTtl=(txTtl*tip);//Tip Amount
    float total=txTtl+tipTtl+sbTtl;//Total
    
    //output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Subtotal = "<<sbTtl<<endl;
    cout<<"Tax = "<<txTtl<<endl;
    cout<<"Tip = "<<tipTtl<<endl;
    cout<<"Total = "<<total<<endl;

    return 0;
}

