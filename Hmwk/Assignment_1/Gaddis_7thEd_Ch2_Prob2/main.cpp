/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 26, 2014, 5:34 PM
 * Purpose: Sales Prediction
 */

//system level libraries
#include <iostream>
#include <iomanip>
using namespace std;

//use libraries

//global constraints

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    float ttlSls=4.6e6;//total Sales
    float perSls=.62;//percent of sales generated
    float slsGen=(ttlSls*perSls);//Sales generated
    
    //output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Total Sales = "<<ttlSls<<endl;
    cout<<"Percent of Sales Generated = "<<perSls<<endl;
    cout<<"Sales Generated = "<<slsGen<<endl;
    return 0;
}

