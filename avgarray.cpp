#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];   
    }

    double average = (double)sum / n;  

    cout << "Average of all elements = " << average << endl;

    return 0;
}
