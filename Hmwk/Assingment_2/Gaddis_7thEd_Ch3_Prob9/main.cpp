/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on July 2, 2014, 10:43 PM
 * Purpose:Average rainfall
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
    //declare variables
    float lnPay;//monthly cost of loan payment
    float insur;//monthly cost of insurance
    float gas;//monthly cost of gas
    float oil;//monthly cost of oil
    float tires;//monthly cost of tires
    float maint;//monthly cost of maintenance
    
    //input
    cout<<"What is the monthly cost of the loan payment?"<<endl;
    cin>>lnPay;
    cout<<"What is the monthly cost of insurance?"<<endl;
    cin>>insur;
    cout<<"What is the monthly cost of gas?"<<endl;
    cin>>gas;
    cout<<"What is the monthly cost of oil?"<<endl;
    cin>>oil;
    cout<<"What is the monthly cost of tires?"<<endl;
    cin>>tires;
    cout<<"What is the monthly cost of maintenance?"<<endl;
    cin>>maint;
    
    //calculate
    float monTtl=lnPay+insur+gas+oil+tires+maint;
    float yrTtl=monTtl*12;
    
    //output results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your total monthly expenses are $"<<monTtl<<endl;
    cout<<"Your total yearly expenses are $"<<yrTtl<<endl;

    return 0;
}

