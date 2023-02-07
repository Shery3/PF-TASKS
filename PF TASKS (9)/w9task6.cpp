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
    cout<<"THE CHARACTER AT INDEX "<<idx<<" IS "<<word[idx]<<endl;
    idx++;
  }



}
