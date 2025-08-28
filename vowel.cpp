#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter a character: ";
    cin>>ch;

    if(ch=='a'|| ch=='A'||ch=='e'|| ch=='E'||ch=='i'|| ch=='I'||ch=='o'|| ch=='O'||ch=='u'|| ch=='U')
    {
        cout<<ch<<" is a vowel.";
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is a consonant." << endl;
    }
    else
    {
        cout<<ch<<" is not a alphabet.";
    }
    return 0;
}