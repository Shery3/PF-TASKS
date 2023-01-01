#include<iostream>
#include<windows.h>
using namespace std;

void challan(int speed);

main()
{
  int speed;
  while(true)
 {
  cout<<"ENTER THE SPEED OF YOUR CAR: ";
  cin>>speed;
  challan(speed);
 }
}

void challan(int speed)
{
  if(speed>100)
  {
   cout<<"Halt...YOU WILL BE CHALLENGED!!!"<<endl; 
  }
  if(speed==100)
  {
   cout<<"Perfect! You are going good."<<endl; 
  }
}