/* 
 * File:   main.cpp
 * Author: Mark Duran
 * Created on June 30, 2014, 10:24 AM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare 3 variables
      char a=50,b=51,temp;
    //output the values
      cout<<"Initialized Values for a and b"<<endl;
      cout<<"a="<<static_cast<int>(a)<<" b="<<static_cast<int>(b)<<endl;
      cout<<"a="<<a<<" b="<<b<<endl;
    //swap with a memory position and output
      temp=a;
      a=b;
      b=temp;
      cout<<"After the Swap in memory"<<endl;
      cout<<"a="<<static_cast<int>(a)<<" b="<<static_cast<int>(b)<<endl;
      cout<<"a="<<a<<" b="<<b<<endl;
    //swap in place and output
      a=a^b;
      b=a^b;
      a=a^b;
      cout<<"After the Swap in place"<<endl;
      cout<<"a="<<static_cast<int>(a)<<" b="<<static_cast<int>(b)<<endl;
      cout<<"a="<<a<<" b="<<b<<endl;
    //setup the truth table
      cout<<endl<<"The truth table"<<endl;
      cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X" ;
      cout<<" X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    //first row
      bool x=true,y=true;
      cout<<(x?'T':'F')<<" ";
      cout<<(y?'T':'F')<<"  ";
      cout<<(!x?'T':'F')<<"  ";
      cout<<(!y?'T':'F')<<"   ";
      cout<<(x&&y?'T':'F')<<"    ";
      cout<<(x||y?'T':'F')<<"   ";
      cout<<(x^y?'T':'F')<<"    ";
      cout<<(x^y^x?'T':'F')<<"     ";
      cout<<(x^y^y?'T':'F')<<"      ";
      cout<<(!x&&y?'T':'F')<<"      ";
      cout<<(!x||!y?'T':'F')<<"       ";
      cout<<(!x||y?'T':'F')<<"       ";
      cout<<(!x&&!y?'T':'F')<<"   "<<endl;
    //second row
      y=false;
      cout<<(x?'T':'F')<<" ";
      cout<<(y?'T':'F')<<"  ";
      cout<<(!x?'T':'F')<<"  ";
      cout<<(!y?'T':'F')<<"   ";
      cout<<(x&&y?'T':'F')<<"    ";
      cout<<(x||y?'T':'F')<<"   ";
      cout<<(x^y?'T':'F')<<"    ";
      cout<<(x^y^x?'T':'F')<<"     ";
      cout<<(x^y^y?'T':'F')<<"      ";
      cout<<(!x&&y?'T':'F')<<"      ";
      cout<<(!x||!y?'T':'F')<<"       ";
      cout<<(!x||y?'T':'F')<<"       ";
      cout<<(!x&&!y?'T':'F')<<"   "<<endl;
    //third row
      x=false,y=true;
      cout<<(x?'T':'F')<<" ";
      cout<<(y?'T':'F')<<"  ";
      cout<<(!x?'T':'F')<<"  ";
      cout<<(!y?'T':'F')<<"   ";
      cout<<(x&&y?'T':'F')<<"    ";
      cout<<(x||y?'T':'F')<<"   ";
      cout<<(x^y?'T':'F')<<"    ";
      cout<<(x^y^x?'T':'F')<<"     ";
      cout<<(x^y^y?'T':'F')<<"      ";
      cout<<(!x&&y?'T':'F')<<"      ";
      cout<<(!x||!y?'T':'F')<<"       ";
      cout<<(!x||y?'T':'F')<<"       ";
      cout<<(!x&&!y?'T':'F')<<"   "<<endl;
    //fourth row
      x=false,y=false;
      cout<<(x?'T':'F')<<" ";
      cout<<(y?'T':'F')<<"  ";
      cout<<(!x?'T':'F')<<"  ";
      cout<<(!y?'T':'F')<<"   ";
      cout<<(x&&y?'T':'F')<<"    ";
      cout<<(x||y?'T':'F')<<"   ";
      cout<<(x^y?'T':'F')<<"    ";
      cout<<(x^y^x?'T':'F')<<"     ";
      cout<<(x^y^y?'T':'F')<<"      ";
      cout<<(!x&&y?'T':'F')<<"      ";
      cout<<(!x||!y?'T':'F')<<"       ";
      cout<<(!x||y?'T':'F')<<"       ";
      cout<<(!x&&!y?'T':'F')<<"   "<<endl;
    return 0;
}

