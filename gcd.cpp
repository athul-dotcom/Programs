#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number a:";
    cin>>a;
    cout<<"Enter number b:";
    cin>>b;

    int x=a,y=b;

    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD of " << x << " and " << y << " is " << a << endl;

    return 0;
}