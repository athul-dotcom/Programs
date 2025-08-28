#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Grade A mark 95-100"<<endl;
    cout<<"Grade B mark 85-94"<<endl;
    cout<<"Grade C mark 70-84"<<endl;
    cout<<"Grade D mark 50-69"<<endl;

    cout<<"Enter mark out of 100: ";
    cin>>n;
    if (n< 0 || n>100) {
        cout << "Invalid marks! Please enter between 0 and 100." << endl;
    }
    else if (n >= 95 && n <= 100) 
    {
        cout<<"Grade A"<<endl;
    }
    else if(n>=85 && n<=94)
    {
        cout<<"Grade B"<<endl;
    }
     else if(n>=70 && n<=84)
    {
        cout<<"Grade C"<<endl;
    }
     else if(n>=50 && n<=69)
    {
        cout<<"Grade D"<<endl;
    }
     else if(n>=0)
    {
        cout<<"Failed"<<endl;
    }
    else {
        cout<<"Invalid marks entered!"<<endl;
    }
    return 0;
}