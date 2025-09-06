#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number a:";
    cin>>a;
    cout<<"Enter number b:";
    cin>>b;

    int lcm;

    for(int i =1;;i++)
    {
        if(i % a == 0 && i % b == 0) 
        {
            lcm = i;
            break;
        }
    }
    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}
