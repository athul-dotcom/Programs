#include<iostream>
using namespace std;
int main()
{
    int a,b,r;

    cout<<"Enter number a:";
    cin>>a;

    cout<<"Enter number b:";
    cin>>b;

    r=a%b;
    cout<<"Remainder of " <<a<<"%"<<b<<" is:"<<r<<endl;
    return 0;
}