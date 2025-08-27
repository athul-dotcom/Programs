#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    double n,exp,res;
    cout<<"Enter a number:";
    cin>>n;

    cout<<"Enter exponent number:";
    cin>>exp;

    res=pow(n,exp);

    cout<<n<<" raised to the power "<<exp<<" = "<<res<<endl;
    return 0;

}