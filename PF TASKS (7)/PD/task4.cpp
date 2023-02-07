#include<iostream>
using namespace std;

void sequence(int num);

main()
{
    int num;
    cout<<"ENTER THE NUMBER: ";
    cin>>num;

    sequence(num);

}

void sequence(int num)
{
    for(int c=1;c<=num;c++)
    {
        int result;

        if(c % 4== 0)
        {
            result=c * 10;
            cout<<result;
        } 

        else
        {
            cout<<c <<" ";
        }
        cout<<endl;
    }
}