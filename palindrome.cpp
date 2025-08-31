#include<iostream>
using namespace std;
int main()
{
    int n,real,rev=0,digit;
    cout<<"Enter a number:";
    cin>>n;
    real=n;

    while(n>0)
    {
        digit=(n%10);
        rev=rev*10+digit;
        n=n/10;
    }
    if(real==rev)
    {
        cout<<real<<" is Palindrome."<<endl;
    }
    else
    {
        cout<<real<<" is not a Palindrome."<<endl;
    }
    return 0;
}