#include<iostream>
#include<windows.h>
using namespace std;

void flowersPrice(int redRoses,int whiteRoses,int tulips);


main()
{
  int redRoses;
  int whiteRoses;
  int tulips;
  cout<<"ENTER NUMBER OF RED ROSES: "<<endl;
  cin>>redRoses;
  cout<<"ENTER NUMBER OF WHITE ROSES: "<<endl;
  cin>>whiteRoses;
  cout<<"ENTER NUMBER OF TULIPS: "<<endl;
  cin>>tulips;
  flowersPrice(redRoses,whiteRoses,tulips);

}

void flowersPrice(int redRoses,int whiteRoses,int tulips)
{
  
  float totalPrice;
  totalPrice= (redRoses*5.00) + (whiteRoses*7.00) + (tulips*10.00);
  cout << "THE ORIGINAL PRICE IS: ";
  cout << totalPrice;
  cout<<endl;
  if(totalPrice > 200)
  {
    float discount;
    float finalPrice;
    discount = 0.2*totalPrice;
    finalPrice = totalPrice - discount;
    cout << "YOUR FINAL AMOUNT IS: ";
    cout <<finalPrice;
  }
}