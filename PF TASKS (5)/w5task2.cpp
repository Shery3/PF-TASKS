#include<iostream>
#include<cmath>
using namespace std;
 
float quadratic(int a, int b, int c);
float quadraticMinus(int a, int b, int c);

main()
{
  int a=5;
  int b=6;
  int c=1;
  float result1;
  float result2;
  result1 = quadratic(a,b,c);
  cout<<"X IS: "<<result1;
  result2 = quadraticMinus(a,b,c);
  cout<<"X IS: "<<result2;
  

}

float quadratic(int a, int b, int c)
{
  
  float eq1;
  float eq2;
  float eq3;
  float eq4;
  float eq5;
  float eq6;

  eq1= (b*b) - 4*a*c;
  eq2= sqrt(eq1);
  eq3= -b+eq2;
  eq4= eq3/(2*a);
  return eq4;
  
}

float quadraticMinus(int a, int b, int c)
{
  float eq1;
  float eq2;
  float eq3;
  float eq4;
  float eq5;
  float eq6;

  eq1= (b*b) - 4*a*c;
  eq2= sqrt(eq1);
  eq3= -b-eq2;
  eq4= eq3/(2*a);
  return eq4;


}

