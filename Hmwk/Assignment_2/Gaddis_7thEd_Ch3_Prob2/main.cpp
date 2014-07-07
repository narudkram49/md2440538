/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Purpose: Stadium seating
 * Created on July 2, 2014, 7:14 PM
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
    //define variables
    float clsA = 15;//class a ticket price
    float clsB = 12;//class b ticket price
    float clsC = 9;//class c ticket price
    float clsAsl;//class a ticket sales
    float clsBsl;//class b ticket sales
    float clsCsl;//class c ticket sales
    
    //input
    cout<<"How many class A tickets were sold?"<<endl;
    cin>>clsAsl;
    cout<<"How many class B tickets were sold?"<<endl;
    cin>>clsBsl;
    cout<<"How many class C tickets were sold?"<<endl;
    cin>>clsCsl;
    
    //calculate
    float inGen = (clsAsl * clsA) + (clsBsl * clsB) + (clsCsl * clsC);//income generated
    
    //output results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total income generated is $"<<inGen<<endl;

    return 0;
}

