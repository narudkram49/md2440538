/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 26, 2014, 10:20 PM
 * Purpose: Annual Pay
 */

//system level libraries
#include <iostream>
#include <iomanip>
using namespace std;

//use libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare and initialize variables
    float payAmnt=1700.0;//Amount paid per pay period
    float payPrds=26;//Number of pay period per year
    float annlPay=payAmnt*payPrds;//Annual pay
    
	//output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Annual Pay = "<<annlPay<<endl;

    return 0;
}

