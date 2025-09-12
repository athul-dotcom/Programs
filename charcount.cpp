#include <iostream>
using namespace std;

int main() 
{
    char str[100];
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter a character to count: ";
    cin >> ch;


    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            count++;
        }
    }

    cout << "The character '" << ch << "' occurs " << count << " times in the string." << endl;

    return 0;
}


