//Write a C++ program to count the number of occurrences of a number in an array using function.
#include <iostream>
using namespace std;
int count(int arr[],int n,int m){
    int s=0;
    for(int i=0;i<n;i++){
        if(m ==arr[i]){
            s++;
        }
    }
        return s;
}
int main(){
    int c,m,n,arr[20];
    cout<<"enter the array size: ";
    cin>>n;
    cout<<"enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target element\n";
    cin>>m;
    c=count(arr,n,m);
    cout<<c;
}