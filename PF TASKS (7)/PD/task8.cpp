#include <iostream>
using namespace std;

main()
{
    float count;
    float toncargo;
    float minibus=0;
    float truck=0;
    float train = 0;
    float minibusaverage=0;
    float truckaverage=0;
    float trainaverage=0;
    float sum = 0;
    float averagefinal=0;

    cout << "ENTER THE COUNT: ";
    cin >> count;
    for(int i = 1;i <= count;i ++)
    {
	cout<<"ENTER TONNAGE OF CUURENT CARGO: ";
        cin >> toncargo;
        if(toncargo>=1 && toncargo<=3)
        {
            minibus=minibus+toncargo;
        }

        else if(toncargo >3 && toncargo <= 11)
        {
            truck = truck + toncargo;
        }

        else if(toncargo >11)
        {
            train = train + toncargo;
        }
    }
    sum = minibus+truck+train;
    minibusaverage=(minibus/sum)*100;
    truckaverage =(truck/sum)*100;
    trainaverage = (train/sum)*100;

    averagefinal=((minibus*200)+(truck*175)+(train*120))/sum;

    cout << "AVERAGE PRICE PER TON OF CARGO = " << averagefinal  << endl;
    cout << "PERCENTAGE OF CARGO BY MINIBUS = " << minibusaverage << "%" << endl;
    cout << "PERCENTAGE OF CARGO BY TRUCK = " << truckaverage << "%"  << endl;
    cout << "PERCENTAGE OF CARGO BY TRAIN = " <<  trainaverage << "%"  << endl;

}