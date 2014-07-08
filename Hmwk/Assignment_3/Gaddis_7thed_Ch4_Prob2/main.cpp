/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 7:00 PM
 * Purpose: Roman Numeral Converter
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
    char num;
    
    //input data
    cout<<"Enter a number between 1 and 10 to be converted to a Roman numeral\n";
    cin>>num;
    switch (num)
    {
        case '1':cout<<"I\n";
        break;
        case '2':cout<<"II\n";
        break;
        case '3':cout<<"III\n";
        break;
        case '4':cout<<"IV\n";
        break;
        case '5':cout<<"V\n";
        break;
        case '6':cout<<"VI\n";
        break;
        case '7':cout<<"VII\n";
        break;
        case '8':cout<<"VIII\n";
        break;
        case '9':cout<<"IX\n";
        break;
        case '10':cout<<"X\n";
        break;
        default:cout<<"You did not enter a number from 1 to 10\n";
    }
    

    return 0;
}

