#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a number:";
    cin>>a;

    cout<<"Enter b number:";
    cin>>b;

    if(a<b)
    {
        cout<<a<< " is smallest. ";
    }
    else
    {
        cout<<b<<" is smallest.";
    }
    return 0;
}