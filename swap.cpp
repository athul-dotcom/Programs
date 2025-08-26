#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter a value:";
    cin>>a;

    cout<<"Enter b value:";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"After swapping a="<<a<<", b="<<b<<endl;
    return 0;
}