#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter side a:";
    cin>>a;

    cout<<"Enter side b:";
    cin>>b;

    cout<<"Enter side c:";
    cin>>c;

    if(a<=0||b<=0||c<=0||(a+b<=c)||(a+c<=b)||(b+c<=a))
    {
        cout<<"Not a valid triangle."<<endl;
        return 0;
    }
    if(a==b&&b==c)
    {
        cout<<"Equilateral triangle.";
    }
    else if(a==b||b==c||c==b)
    {
        cout<<"Isosceles triangle.";
    }
    else
    cout<<"Scalene triangle.";
    
    return 0;
}