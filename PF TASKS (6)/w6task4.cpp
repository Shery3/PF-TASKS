#include<iostream>
using namespace std;

string checkSpeed(float speed);

main()
{
  float speed;
 
  string output;
  cout<<"ENTER YOUR SPEED: ";
  cin>>speed;
  
  
  output=checkSpeed (speed);
  cout<< "YOUR OUTPUT IS: "<<output;

}




string checkSpeed(float speed)
{
    string result;

    if(speed<=10)
    {
        result="slow";
 
    }

    else if(speed>10 && speed<=50)
    {
       result="average"; 

    }
  
    else if(speed>50 && speed<=150)
    {
         result="fast";

    }
 
    else if(speed>150 && speed<=1000)  
    {
       result="ultraFast";
   
    }
   
    else
    {
      result="extremelyFast";

    }
    return result;

}