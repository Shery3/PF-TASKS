#include<iostream>
using namespace std;
void lefttriangle(int rows);
void righttriangle(int rows);

main()
{
    int rows;
    cout << "ENTER THE ROWS: ";
    cin >> rows;
    lefttriangle(rows); righttriangle(rows);
}
void lefttriangle(int rows)
{
    for(int i= 1;i <= rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        for(int k = 1;k<=rows;k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void righttriangle(int rows)
{
    for(int i = 1;i<=rows;i++)
    {
        for(int j = i;j<=rows;j++)
        {
            cout << " ";
        }
        for(int k = 1 ;k<=i;k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}