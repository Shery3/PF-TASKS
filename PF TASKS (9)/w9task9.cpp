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

  char letter;
  cout<<"ENTER THE LETTER: ";
  cin>>letter;

  if(word[idx-1]==letter)
  {
    cout<<"LETTER EXISTS..";

  } 

  else
  {
    cout<<"NOT EXISTS..";
  } 
}