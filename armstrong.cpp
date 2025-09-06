#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a number :";
    cin>>n;
    int temp =n;
    while(n>0)
    {
        int digit=n%10;
        sum+=digit*digit*digit;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<temp<<" is a armstrong number"<<endl;
    }
    else
    {
        cout<<temp<<" is not a armstrong number"<<endl;
    }
    return 0;
}