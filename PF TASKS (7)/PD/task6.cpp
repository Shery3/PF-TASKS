#include<iostream>
using namespace std;



main()
{
    int days;
    int patients;
    int doctors=7;
    int treated=0;
    int untreated=0;

    cout<<"ENTER THE TIME: ";
    cin>>days;

    for(int i=1; i<=days;i++)
    {
        cout<<"ENTER PATIENTS: ";
        cin>>patients;
        if((i%3==0) && (untreated-treated>0))
        {
            doctors=doctors+1;
        }

        if(patients>doctors)
        {
            treated=treated+doctors;
            untreated=untreated+(patients-doctors);
        }
        else
        {
            treated=treated+patients;
        }
    }
    cout<<"TREATED PATIENTS: ";
    cout<<treated<<endl;
    cout<<"UNTREATED PATIENTS: ";
    cout<<untreated;
    
}