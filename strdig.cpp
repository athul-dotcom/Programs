#include <iostream>
using namespace std;

int main() 
{
    char str[100];
    int i, flag = 0;

    cout << "Enter a string: ";
    cin >> str;   

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= '0' && str[i] <= '9') 
        {  
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "The string contains a digit." << endl;
    else
        cout << "The string does not contain any digit." << endl;

    return 0;
}
