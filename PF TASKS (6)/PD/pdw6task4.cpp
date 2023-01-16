#include<iostream>
using namespace std;

float charges(char service, char time, float minutes);


main()
{

   char service;
   char time;
   float minutes;
   float output;

   cout<< "ENTER THE TYPE OF YOUR SERVICE(r/p): ";
   cin>> service;
   cout<< "ENTER THE TIME('d' for day or 'n' for night): ";
   cin>> time;
   cout<< "ENTER NUMBER OF MINUTES YOU USED THE SERVICE: ";
   cin>> minutes;

   output= charges(service, time, minutes);
   cout<<"THE CHARGES ARE:"<<output<<"$";

}

float charges(char service, char time, float minutes)
{    
    float charge;
 
    if(service=='r' && minutes<=50)
    {
      charge= 10;

    }

     if(service=='r' && minutes>50)
    {
      charge= 10 * (0.20 * minutes);

    }

    if(service=='p' && minutes<=75 && time=='d')
    {
      charge= 25;

    }
 
    if(service=='p' && minutes>75 && time=='d')
    {
      charge= 25 * (0.10 * minutes);

    }

    if(service=='p' && minutes<=100 && time=='n')
    {
      charge= 25;

    }

    if(service=='p' && minutes>100 && time=='n')
    {
      charge= 25 *(0.05 * minutes);

    }

   return charge;
}