// Write a C++ program to copy the elements of one array into another array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array:\n";
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter array elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"entered Array:\n";
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<"\n";
    }
    int *arr2 = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr2[i]=arr[i];
    }
    cout<<"Copied array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << "\n";
    }
    delete[] arr;
    delete[] arr2;
    return 0;
}