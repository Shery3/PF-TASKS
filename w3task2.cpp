#include<iostream>
using namespace std;
void ifPass(int marks);
main(){


   int marks;
while(true){
   cout<<"ENTER YOUR MARKS: ";
   cin>>marks;

   ifPass(marks);
}
}


void ifPass(int marks){



    if(marks>50)
      {
       cout<<"YOU HAVE PASSED THE QUIZ: "<<endl;


      }
    if(marks==50)
      {

       cout<<"YOUR MARKS ARE 50.."<<endl;

      }

    if(marks<50)
     {

     cout<<"YOU FAILED..";

     }
 


}