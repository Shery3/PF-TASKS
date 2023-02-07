#include<iostream>
using namespace std;

main()
{
    string word;
    cout<<"ENTER THE SENTENCE: ";
    getline(cin,word);

    int idx=0;

    while(word[idx] !='\0')
  {
    if(word[idx]=='a' || word[idx]=='e' || word[idx]=='i' || word[idx]=='o' || word[idx]=='u')
    {
        cout<<"";
    }
    else{
    cout<<word[idx];
    }
    idx++;

  }

}