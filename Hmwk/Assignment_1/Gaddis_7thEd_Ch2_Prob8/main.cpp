/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 26, 2014, 10:30 PM
 * Purpose: Total Purchase
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
    float item1=12.95;//price of item 1
    float item2=24.95;//price of item 2
    float item3=6.95;//price of item 3
    float item4=14.95;//price of item 4
    float item5=3.95;//price of item 5
    float subTtl=item1+item2+item3+item4+item5;//subtotal
    float tax=.06;//tax rate
    float taxTtl=subTtl*tax;//total tax
    float total=subTtl+taxTtl;//total
    
    //output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Subtotal = "<<subTtl<<endl;
    cout<<"Tax = "<<taxTtl<<endl;
    cout<<"Total = "<<total<<endl;

    return 0;
}

