#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,dis,r1,r2,x,y;

    cout<<"Enter cofficients for a: ";
    cin>>a;

    cout<<"Enter cofficients for b: ";
    cin>>b;

    cout<<"Enter cofficients for c: ";
    cin>>c;
    
    dis=(b*b-4*a*c);

    if(dis>0)
    {
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        cout<<"Roots are real and distinct: " <<r1<<" , "<<r2<<endl;
    }
    else if(dis==0)
    {
        r1=-b/(2*a);
        cout<<"Roots are real and equal:"<<r1<<","<<r1<<endl;
    }
    else
    {
        x=-b/(2*a);
        y=sqrt(-dis)/(2*a);
        cout<<"Roots are complex: "<<x<<" + "<<y<<"i ,"
        <<x<<" - "<<y<<"i"<<endl;
    }
    return 0;
}