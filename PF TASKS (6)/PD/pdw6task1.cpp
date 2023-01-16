#include<iostream>
using namespace std;

string activity(string temperature, string humidity);

main()
{
   string temperature;
   string humidity;
   string output;
   
   cout<<"ENTER THE TEMPERATURE:";
   cin>>temperature;
   cout<<"ENTER THE HUMIDITY: ";
   cin>>humidity;
 
   output=activity(temperature, humidity);
   cout<<"YOUR ACTIVITY IS: "<<output;


}

string activity(string temperature, string humidity)
{    
    string answer;
   if(temperature=="warm" && humidity=="dry")
   {
     answer="playTennis";

   }
   
   else if(temperature=="warm" && humidity=="humid")
   {
     answer="swim";

   }
 
   else if(temperature=="cold" && humidity=="dry")
   {
     answer="playBasketball";

   }

   else if(temperature=="cold" && humidity=="humid")
   {
     answer="watchTV";

   }
   return answer;
}