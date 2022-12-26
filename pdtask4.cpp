#include<iostream>
using namespace std;
main(){

     float marks1;
     float marks2;
     float marks3;
     float marks4;
     float marks5;
     string name; 
     float percentage;   
     cout<<"ENTER NAME: ";
     cin>> name;
     cout<<"ENTER SUBJECT 01 MARKS: ";
     cin>> marks1;
     cout<<"ENTER SUBJECT 02 MARKS: ";
     cin>> marks2;
     cout<<"ENTER SUBJECT 03 MARKS: ";
     cin>> marks3;
     cout<<"ENTER SUBJECT 04 MARKS: ";
     cin>> marks4;
     cout<<"ENTER SUBJECT 05 MARKS: ";
     cin>> marks5;
     percentage=((marks1 + marks2 + marks3 + marks4 + marks5)/500)*100;
     cout<<"YOUR PERCENTAGE IS: "<<percentage;
}