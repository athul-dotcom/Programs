#include<iostream>
using namespace std;
int main()
{
    int a,b,c,avg;
    cout<<"Enter a number:";
    cin>>a;

    cout<<"Enter b number:";
    cin>>b;

    cout<<"Enter c number:";
    cin>>c;

    avg=(a+b+c)/3;

    cout<<"Average of "<<a<<"+"<<b<<"+"<<c<<" is:"<<avg<<endl;
    return 0;
}