#include<iostream>
using namespace std;
int main()
{
    int n,prime=true;
    cout<<"Enter a number:";
    cin>>n;
    if(n<=1)
    {
        prime=false;
    }
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                prime=false;
                break;
            }
        }
    }
    if(prime)
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}