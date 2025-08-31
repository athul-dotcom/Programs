#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter angle a: ";
    cin>>a;

    cout<<"Enter angle b: ";
    cin>>b;

    cout<<"Enter angle c: ";
    cin>>c;

    if(a>0&&b>0&&c>0&&(a+b+c==180))
    {
        cout<<"The triangle is valid."<<endl;
    }
    else
    {
        cout<<"The triangle is not valid."<<endl;
    }
    return 0;
}
