#include<iostream>
using namespace std;

float calculatePrice(float money, int year);

main()
{
    float money;
    int year;
    float output;

    cout<<"ENTER THE INHERITED MONEY[1.00...1 000 000.00]: ";
    cin>>money;
    cout<<"ENTER THE YEAR: ";
    cin>>year;

    output= calculatePrice (money,year);

    if(output>0)
    {
        cout<<"YES! YOU WILL HAVE A CAREFREE LIFE AND WILL HAVE "<<output<<" DOLLARS LEFT.";
    }
    if(output<0)
    {
        cout<<"YOU NEED "<<-output<<" DOLLARS TO SURVIVE.";
    }

}

float calculatePrice(float money, int year)
{
    float age=17;
    float result;

    for(int past=1800; past<=year;past++)
    {
        age=age+1;

        if(year%2!=0)
        {
            result= (12000.00 + 50.00*(age));
            money=money-result;
        }

        else if(year%2==0)
        {
            money=money-12000.00;
        }
    
    }
    return money;
}