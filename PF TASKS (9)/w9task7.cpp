#include<iostream>
using namespace std;

main()
{       
  string word;
  cout<<"ENTER THE WORD: ";
  getline(cin,word);

  string arr[]={word};

  int idx=0;
  
  while(word[idx] !='\0')
  {
    idx++;
  }

  cout<<"LENGTH IS: "<<idx<<endl;

    if(idx % 2 ==0)
    {
        cout<<"EVEN";
    }

    else if(idx % 2 != 0)
    {
        cout<<"odd";
    }

}
