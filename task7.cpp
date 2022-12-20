#include<iostream>
using namespace std;
main(){


    string name;
    float matric;
    float mmarks;
    float intermediate;
    float imarks;
    float ecat;
    float emarks;
    float aggregate;

    cout<<"ENTER NAME: ";
    cin>>name;
    cout<<"ENTER YOUR MATRIC MARKS: ";
    cin>>mmarks;
    matric=mmarks/1100*10;
    cout<<"ENTER YOUR INTERMEDIATE MARKS: ";
    cin>>imarks;
    intermediate=imarks/550*40;
    cout<<"ENTER YOUR ECAT MARKS:";
    cin>>emarks;
    ecat=emarks/400*50;
    aggregate=matric+intermediate+ecat;
    cout<<"AGGREGATE IS: "<<aggregate;
    


}