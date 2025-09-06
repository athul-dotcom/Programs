#include <iostream>
using namespace std;
int main()
{
    int n,fact =1;
    cout<<"Eter a number: ";
    cin>>n;

    if(n<0)
    {
        cout<<"Factorial is not defined for nehative numbers";
    }
    else
    {
        for (int i = 1; i <= n; i++) 
        {
            fact *= i;
        }
        cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    }
    return 0;
}