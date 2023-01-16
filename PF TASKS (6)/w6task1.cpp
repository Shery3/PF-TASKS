#include<iostream>
using namespace std;

char calculateGrade(int marks );


main()
{
   int marks;
   int result;
   cout<<"ENTER THE MARKS: ";
   cin>>marks;  
   result= calculateGrade(marks);
   cout<<"YOUR GRADE IS: "<<result;
   
  
  
}

char calculateGrade(int marks )
{
     char grade;
    if (marks>85)
    {
       grade= 'A';
       
    }
  
    else if(marks<=85 && marks>=81)
    {

      grade= 'B';
    }
  
    else if(marks<=80 && marks>=71)
    {
      grade= 'C';
    }
 
    else if(marks<=70 && marks>=61)
    {
      grade= 'D';
    }

    else if(marks<=60 && marks>=50)
    {
      grade= 'E'; 
    }
   
    else if(marks<50)
    {
       grade= 'F';
    }
     return grade;
}