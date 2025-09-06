#include <iostream>
using namespace std;

int main() {
    int n,prime=true;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";
 if(n<=1)
    {
        prime=false;
    }
    else
    {
    for (int num = 2; num <= n; num++) 
    {
        

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << num << " ";
        }
    }   
}

    cout << endl;
    return 0;
}