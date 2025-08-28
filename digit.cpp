#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"Enter a character:";
    cin>>n;

    if (n>='0' && n<='9') 
    {
        cout<<n<<" is an digit."<<endl;
    }
    else
    {
        cout<<n<<" is not a digit.";
    }
    return 0;
}