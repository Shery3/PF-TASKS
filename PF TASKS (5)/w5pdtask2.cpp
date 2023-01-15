#include<iostream>
using namespace std;

float volumeOfpyramid(float length, float width, float height, string unit);


main()
{
   float length, width, height;
   string unit;
   float pyramidVolume;
   cout<<"ENTER LENGTH(in meters): ";
   cin>>length;
   cout<<"ENTER WIDTH(in meters): ";
   cin>>width;
   cout<<"ENTER HEIGHT(in meters): ";
   cin>>height;
   cout<<"ENTER UNIT: ";
   cin>>unit;

   pyramidVolume = volumeOfpyramid(length, width, height, unit);
   cout<<"OUTPUT IS: "<<pyramidVolume;
}




float volumeOfpyramid(float length, float width, float height, string unit)
{
   float volume;
   float result;
   volume=(length * width * height)/3;
   if(unit=="millimeters")
   {
     result= volume * 1000 * 1000 * 1000;
     
   }

   if(unit=="centimeters")
   {
     result= volume * 100 * 100 * 100;
     
   }

   if(unit=="kilometers")
   {
     result= volume / (1000 * 1000 * 1000);
     
   }

   if(unit=="meters")
   {
     result= volume;
     
   }
    return result;
}