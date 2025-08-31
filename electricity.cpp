#include<iostream>
using namespace std;
int main()
{
    int n,rate;
    cout<<"0-100units == 12 rupees per unit"<<endl;
    cout<<"101-200units == 22 rupees per unit"<<endl;
    cout<<"201-300units == 45 rupees per unit"<<endl;
    cout<<"above 300units == 55 rupees per unit"<<endl;

    cout<<"Enter no.of units used: ";
    cin>>n;

    if(n<=100)
    {
        rate=(n*1);
    }
    else if (n<=200)
    {
        rate=(100*12)+(n-100)*22;
    }
    else if(n<=300)
    {
        rate=(100*12)+(100*22)+(n-200)*45;
    }
    else
    {
        rate=(100*12)+(100*22)+(100*40)+(n-300)*55;
    }
    cout<<"Electricity Bill= "<<rate<<" Rupees"<<endl;
    return 0;
}