#include <iostream>
using namespace std;

int count(const int arr[], int n, int m)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            s++;
        }
    }
    return s;
}

int main()
{
    int c, m, n;
    cout << "Enter the array size: ";
    cin >> n;

    int *arr = new int[n]; // Dynamic allocation of array

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target element: ";
    cin >> m;

    c = count(arr, n, m);
    cout << c;

    delete[] arr; // Freeing the allocated memory
    return 0;
}
