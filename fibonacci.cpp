#include<iostream>
using namespace std;
int main()
{
    int n,x=0,y=1,z;
    cout<<"Enter a number:";
    cin>>n;

    cout<<"Fibonacci series upto "<<n<<" is:";
    for(int i=1;i<=n;i++)
    {
    cout<<x<< " ";
    z=x+y;
    x=y;
    y=z;
    }
    return 0;
}