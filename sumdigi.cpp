#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    int temp=n;
    while (n > 0) 
    {
        sum += n % 10;   
        n = n / 10;      
    }
    cout << "Sum of digits of " << temp << " = " << sum << endl;
    return 0;
}