#include<iostream>
using namespace std;

string grade(int english,int maths,int chemistry,int socialScience,int biology);

main()
{
  
  string stdname;
  int english,maths,chemistry,socialScience,biology;
  string output;

  cout<<"ENTER YOUR NAME: ";
  cin>>stdname;
  cout<<"ENTER ENGLISH MARKS: ";
  cin>>english;
  cout<<"ENTER MATHS MARKS: ";
  cin>>maths;
  cout<<"ENTER CHEMISTRY MARKS: ";
  cin>>chemistry;
  cout<<"ENTER SOCIAL SCIENCE MARKS: ";
  cin>>socialScience;
  cout<<"ENTER BIOLOGY MARKS: ";
  cin>>biology;

  cout<<"YOUR NAME IS: "<<stdname<<endl;
  output=grade(english, maths, chemistry, socialScience, biology);
  cout<<"YOUR GRADE IS: "<<output;

}

string grade(int english,int maths,int chemistry,int socialScience,int biology)
{
  string result;
  float marks=english + maths + chemistry + socialScience + biology ;
  cout<<"YOUR MARKS IS: "<<marks<<endl;
  float percentage= (marks / 500) * 100;
  if (percentage>90 && percentage<=100)
  { 
      result="A+";
  }
  
  if (percentage>80 && percentage<=90)
  { 
      result="A";
  }

  if (percentage>70 && percentage<=80)
  { 
      result="B+";
  }

  if (percentage>60 && percentage<=70)
  { 
      result="B";
  }

  if (percentage>50 && percentage<=60)
  { 
      result="C";
  }

  if (percentage>40 && percentage<=50)
  { 
      result="D";
  }

  if (percentage<40)
  { 
      result="F";
  }
   return result;
}