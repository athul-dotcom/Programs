#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers from 1 to "<<n<<" are:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}