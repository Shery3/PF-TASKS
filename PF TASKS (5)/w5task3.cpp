#include<iostream>
#include<cmath>
using namespace std;

bool isSymmetrical(char a, char b, char c);
 
main()
{
  char a,b,c;
  bool isTrue;
  cout<<"ENTER THREE DIGITS: ";
  cin>>a;
  cin>>b;
  cin>>c;
  isTrue= isSymmetrical(a,b,c);
  cout<<"RESULT IS: "<<isTrue;
  
 


}
bool isSymmetrical(char a, char b, char c)
{
  bool isTrue;
  if(a==c)
  {
    isTrue= true; 

  }
  if(a!=c)
  {
    isTrue= false; 
  }
  return isTrue;
}