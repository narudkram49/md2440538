/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 7th, 2014, 7:00 PM
 * Purpose: Area of rectangles
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
    int length1,
        width1,
        length2,
        width2;

    //input data
    cout<<"Enter the length of the first rectangle\n";
    cin>>length1;
    cout<<"Enter the width of the first rectangle\n";
    cin>>width1;
    
    cout<<"Enter the length of the second rectangle\n";
    cin>>length2;
    cout<<"Enter the width of the second rectangle\n";
    cin>>width2;
    
    //calulate
    int area1=length1*width1,
        area2=length2*width2;
    
    //output results
    if (area1>area2)
        cout<<"The area of the first rectangle is larger\n";
    else if (area1<area2)
        cout<<"The area of the second rectangle is larger\n";
    else if (area1==area2)
        cout<<"The areas of the rectangles are the same\n";

    return 0;
}

