#include<iostream>
using namespace std;
int main()
{
    int pdt=1,i,n;
    
    cout<<"Enter a number: ";
    cin>>n;
    for( i=1;i<=n;i++)
    {
       pdt *=i;
    }
    cout<<"Product of "<<n<<" natural numbers is: "<<pdt<<endl;
    return 0;
}