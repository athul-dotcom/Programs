#include<iostream>
using namespace std;
int main()
{
    int n,sum;

    cout<<"Enter a number:";
    cin>>n;

    sum=n*(n+1)/2;

    cout<<"Sum of "<<n<<" natural number is:"<<sum<<endl;
    return 0;
}