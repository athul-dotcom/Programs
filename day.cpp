#include<iostream>
using namespace std;
int main()
{
    int n,ch;
    cout<<"Enter a number to find day of weeK:";
    cin>>n;
    if(n==1)
    {
        cout<<"Sunday"<<endl;
    }
    else if (n==2)
    {
        cout<<"Monday"<<endl;
    }
    else if (n==3)
    {
        cout<<"Tuesday"<<endl;
    }
    else if (n==4)
    {
        cout<<"Wednesday"<<endl;
    }
    else if (n==5)
    {
        cout<<"Thursday"<<endl;
    }
    else if (n==6)
    {
        cout<<"Friday"<<endl;
    }
    else if (n==7)
    {
        cout<<"Saturday"<<endl;
    }
    else
    {
        cout<<n<<"Invalid day of the week!"<<endl;
    }
    return 0;
}