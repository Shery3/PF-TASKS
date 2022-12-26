#include <iostream>
using namespace std;

main ()

{

float vegetableprice;
float fruitprice;
int kilogramveg;
int kilogramfruit;
float fruit;
float vegetable;
float result;
float conversion;



cout << "Vegetable price per kilogram: ";
cin >> vegetableprice;
cout << "Fruit price per kilogram: ";
cin >> fruitprice;
cout << "Total kilograms of vegetables: ";
cin >> kilogramveg;
cout << "Total kilograms of fruits: ";
cin >> kilogramfruit;


fruit = fruitprice*kilogramfruit;
vegetable = vegetableprice*kilogramveg;

result = fruit + vegetable;

conversion = result/1.94;

cout << "Answer is: ";
cout << conversion;


}



