#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers from "<<n<<" to 1 are:"<<endl;
    for(int i=n;i>=1;i--)
    {
        cout<<i<<" ";
    }
    return 0;
}