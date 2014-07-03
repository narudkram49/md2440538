/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 2, 2014, 9:54 PM
 * Purpose: Test average
 */

//system level libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //define variables
    float score1;//test score 1
    float score2;//test score 2
    float score3;//test score 3
    float score4;//test score 4
    float score5;//test score 5
    
    //input
    cout<<"Enter test score 1"<<endl;
    cin>>score1;
    cout<<"Enter test score 2"<<endl;
    cin>>score2;
    cout<<"Enter test score 3"<<endl;
    cin>>score3;
    cout<<"Enter test score 4"<<endl;
    cin>>score4;
    cout<<"Enter test score 5"<<endl;
    cin>>score5;
    
    //calculate average
    float avg = (score1+score2+score3+score4+score5)/5;
    
    //output results
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The average test score is "<<avg<<endl;

    return 0;
}

