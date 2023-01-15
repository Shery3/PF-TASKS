#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;



main()
{
   int number1;
   int number2;
  float greater; 
  float lesser;
  float power;
  int squareRoot;
  float bigger; 
  float smaller;
  cout<<"ENTER FIRST NUMBER: ";
  cin>>number1;
  cout<<"ENTER SECOND NUMBER: ";
  cin>>number2;
  
  greater= max(number1, number2);
  cout<< greater <<" IS GREATER.."<<endl;
  lesser= min(number1, number2);
  cout<<lesser <<" IS LESSER.."<<endl;
  power= pow(number1, number2);
  cout<<"POWER IS "<<power<<endl;
  squareRoot= sqrt(number1);
  cout<<"SQUARE ROOT IS "<<squareRoot<<endl;
  bigger=ceil(number1);
  cout<<"ROUND OF NUMBER1 IS "<<bigger<<endl; 
  smaller=floor(number1);
  cout<<"ROUND OF NUMBER1 IS "<<smaller<<endl;
  
}

