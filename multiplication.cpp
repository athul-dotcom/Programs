#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a number to multiply:";
    cin>>a;

    cout<<"Enter a number for tables:";
    cin>>b;

    for(int i=1;i<=b;i++)
    {
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
    return 0;
}