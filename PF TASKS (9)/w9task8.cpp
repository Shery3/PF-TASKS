#include<iostream>
using namespace std;

main()
{       
  string word;
  cout<<"ENTER THE WORD: ";
  getline(cin,word);

   

  int idx=0;
  
  while(word[idx] !='\0')
  {
    idx++;
  }

  int length=idx;

  for(int count=length-1; count>=0; count--)
  {
    cout<<word[count];
  }
}