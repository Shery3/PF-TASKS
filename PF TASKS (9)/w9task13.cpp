#include<iostream>
using namespace std;

main()
{
    int num;
    cout<<"ENTER THE LENGTH OF RESISTANCES: ";
    cin>>num;
    cout<<endl;
    float res[num];
    int totalRes=0;
    float sum=0;
    int idx=0;

    while(idx<num)
    {
        cout<<"ENTER THE VALUES OF RESISTANCES: ";
        cin>>res[idx];
        sum=sum+res[idx];
        idx++;
         
    }

    cout<<"TOTAL RESISTANCE IS: "<<sum;

}
