#include<bits/stdc++.h>
using namespace std;
int maxFreq(int arr[],int size)
{ 
    map<int,int> Map;
    for (int i = 0; i < size; i++)
    {
        Map[arr[i]]++;
    }
    int freq=0;
    int maxOcc=arr[0];
    for(const auto& Pair:Map){
        if(Pair.second>freq){
            freq=Pair.second;
            maxOcc=Pair.first;
        }
    }
    return maxOcc;
}
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter elements:\n";
    for (int i = 0; i < size;i++)
    {
        cin>>arr[i];
    }
    int MaxOcc=maxFreq(arr,size);
    cout<<"element with max freq: "<<MaxOcc<<endl;
    delete[] arr;
    
}