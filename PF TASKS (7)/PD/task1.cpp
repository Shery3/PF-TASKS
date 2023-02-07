#include<iostream>
using namespace std;

void nestedFor(int rows);
main()
{
    int rows;
    cout<<"enter the rows: ";
    cin>>rows;

    nestedFor(rows);
}


void nestedFor(int rows)
{
    for(int i=0;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}