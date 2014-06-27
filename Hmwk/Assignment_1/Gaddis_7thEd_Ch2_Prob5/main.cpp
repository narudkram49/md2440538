/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 26, 2014, 10:04 PM
 * Purpose:Average of Values
 */

//system level libraries
#include <iostream>
using namespace std;

//use libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare and initialize variables
    short var1=28;//variable 1
    short var2=32;//variable 2
    short var3=37;//variable 3
    short var4=24;//variable 4
    short var5=33;//variable 5
    short sum=var1+var2+var3+var4+var5;//sum of the variables
    short avg=sum/5;//average of the variables
    
    //output the results
    cout<<"Average = "<<avg<<endl;

    return 0;
}

