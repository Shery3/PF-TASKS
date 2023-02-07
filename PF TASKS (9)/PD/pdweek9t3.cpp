#include<iostream>
using namespace std;

main()
{
    
    string word;
    cout<<"ENTER THE WORD: ";
    getline(cin,word);

    bool flag=false;
    int idx=0;

    while(word[idx]!='\0')
    {
        idx++;
    }

    cout<<idx<<endl;

    if(idx%2==0)
    {
        flag= true;
    }

    if(flag==true)
    {
        cout<<"TRUE";
    }

    else
    {
        cout<<"FALSE";
    }
    



}