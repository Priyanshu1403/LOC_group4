//Take two array as input, merge them and print it in reverse order using loop
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    int *arr1 = new int[n];
    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of the second array: ";
    cin >> m;
    int *arr2 = new int[m];
    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int totalSize = n + m;
    int *mergedArr = new int[totalSize];
    for (int i = 0; i < n; i++)
    {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        mergedArr[n + i] = arr2[i];
    }
    cout << "Merged array in reverse order:\n";
    for (int i = totalSize - 1; i >= 0; i--)
    {
        cout << mergedArr[i] << " ";
    }
    cout << endl;
    delete[] arr1;
    delete[] arr2;
    delete[] mergedArr;

    return 0;
}
