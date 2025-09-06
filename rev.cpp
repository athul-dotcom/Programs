#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter a number to reverse:";
    cin>>n;
    int temp=n;
    while(n>0)
    {
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout<<"Reverse of "<<temp<<" is: "<<rev<<endl;
    return 0;
}