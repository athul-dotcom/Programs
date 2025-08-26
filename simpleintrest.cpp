#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;

    cout<<"Enter principal:";
    cin>>p;

    cout<<"Enter rate of intrest:";
    cin>>r;

    cout<<"Enter time (in years):";
    cin>>t;

    si=(p*r*t)/100;

    cout<<"Simple intrest= "<<si<<endl;
    
    return 0;
}