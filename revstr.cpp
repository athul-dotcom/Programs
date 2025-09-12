#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string:";
    cin>>str;

    cout<<"Characters in reverse order: ";

    int length=0;

    while(str[length]!='\0')
    {
        length++;
    }
    for(int i=length; i>=0;i--)
    {
        cout<<str[i];
    
    }
    cout<<endl;
    return 0;
}