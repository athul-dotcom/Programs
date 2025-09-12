#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;   

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {  
            str[i] = str[i] - 32;              
        }
    }
    cout << "Uppercase: " << str << endl;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {  
            str[i] = str[i] + 32;              
        }
    }
    cout << "Lowercase: " << str << endl;

    return 0;
}
