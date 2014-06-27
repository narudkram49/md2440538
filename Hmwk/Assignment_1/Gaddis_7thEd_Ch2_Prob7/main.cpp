/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 26, 2014, 10:30 PM
 * Purpose: Ocean Levels
 */

//system libraries
#include <iostream>
using namespace std;

//use libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    float risLvl=1.5;//Millimetres rise per year
    float year5=risLvl*5;//Rise in 5 years
    float year7=risLvl*7;//Rise in 7 years
    float year10=risLvl*10;//Rise in 10 years
    
    //output the results
    cout<<"Millimetres risen in five years = "<<year5<<endl;
    cout<<"Millimetres risen in seven years = "<<year7<<endl;
    cout<<"Millimetres risen in ten years = "<<year10<<endl;
    
    return 0;
}

