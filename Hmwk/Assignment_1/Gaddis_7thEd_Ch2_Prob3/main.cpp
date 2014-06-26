/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 26, 2014, 12:14 PM
 * Purpose:Sales Tax
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
    float bill=52;//Bill Subtotal
    float stTax=.04;//State Sales Tax
    float cnTax=.02;//County Sales Tax
    float ttlTax=(stTax*bill)+(cnTax*bill);//Tax Total
    float ttlBll=(ttlTax+bill);//Bill Total
    
	//output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Subtotal = "<<bill<<endl;
    cout<<"Total sales tax = "<<ttlTax<<endl;
    cout<<"Total = "<<ttlBll<<endl;
    return 0;
}

