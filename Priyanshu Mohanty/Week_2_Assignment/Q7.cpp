// Write a C++ program to move all the negative elements to one side of the array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
