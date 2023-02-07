#include<iostream>
using namespace std;

main()
{
    
    string word1;
    string word2;

    cout<<"ENTER THE FIRST WORD: ";
    getline(cin,word1);
    cout<<"ENTER THE SECOND WORD: ";
    getline(cin,word2);

    int length1= word1.length();
    int length2= word2.length();

    int counter=0;

    for(int idx=0; idx<length1; idx++)
    {
        char var=word1[idx];
      for(int idx=0; idx<length2; idx++)  
      {
        if(var==word2[idx])
        {
            counter++;
            break;
        }
      }
    }
    cout<<"STRING HAVE "<<counter<<" COMMON CHARACTERS.";
}

   