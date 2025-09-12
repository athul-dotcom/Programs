#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int smallest = arr[0];   
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }

    cout << "Smallest element in the array = " << smallest << endl;
    return 0;
}
