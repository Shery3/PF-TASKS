#include<iostream>
using namespace std;

void upper(int rows);
void lower(int rows);
main()
{
    int rows;
    cout<<"enter the rows: ";
    cin>>rows;

    upper(rows);
    lower(rows);
}


void upper(int rows)
{
    for(int i=1;i<=rows/2;i++)
    {
        for(int j=i;j<=rows/2;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void lower(int rows)
{
    for(int i=1;i<=rows/2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=i;k<=rows/2;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}