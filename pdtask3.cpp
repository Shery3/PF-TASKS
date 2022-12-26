#include<iostream>
using namespace std;
main(){


   float ivelocity;
   float fvelocity;
   float acceleration;
   float time;
   cout<<"ENTER INITIAL VELOCITY: ";
   cin>> ivelocity;
   cout<<"ENTER ACCELERATION: ";
   cin>> acceleration;
   cout<<"ENTER TIME: ";
   cin>> time;
   fvelocity= (acceleration * time) + ivelocity;
   cout<<"FINAL VELOCITY: "<<fvelocity;
}
   
   
