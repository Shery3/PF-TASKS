#include<iostream>
using namespace std;
main(){


     float bagsize;
     float costbag;
     float area;
     float costoffertilizer;
     float costoffertilizing;

     cout<<"ENTER THE SIZE OF BAG IN POUNDS: ";
     cin>>bagsize;
     cout<<"ENTER COST OF BAG: ";
     cin>> costbag;
     cout<<"ENTER THE AREA COVERED BY EACH BAG IN SQUARE FOOT: ";
     cin>> area;
     costoffertilizer= costbag/bagsize;
     costoffertilizing= costbag/area;
     cout<<"COST OF FERTILIZER PER POUND: "<<costoffertilizer <<endl;
     cout<<"COST OF FERTILIZING THE AREA PER SQUARE FEET: "<<costoffertilizing;
}