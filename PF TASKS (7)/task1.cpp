#include<iostream>
using namespace std;
main()
{
int length;
cout<<"ENTER THE LENGTH: ";
cin>>length;

int n1=0;
cout<<n1;
int sum;
int n2=1;

for(int count=1; count<length; count++)
{
    sum=n1+n2;
    cout<<","<<sum;
    n1=n2;
    n2=sum;

}
}