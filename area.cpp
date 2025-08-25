#include<iostream>
using namespace std;
int main()
{
    int l,w,area;
    
    cout<<"Enter the length of rectangle: ";
    cin>>l;

    cout<<"Enter the width of rectangle: ";
    cin>>w;

    area=l*w;
    cout<<"Area of rectangle " <<l<<" x "<<w<< " is: " <<area<<endl;
    return 0  ;  
}