#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    vector<int> vect1;
    cout<<"Enter the size:\n";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin>>temp;
        vect1.push_back(temp);
    }
    cout<<"Vector 1:\n";
    for(int num: vect1){
        cout<<num<<"\n";
    }
    vector<int> vect2(vect1.begin(),vect1.end());
    cout<<"Copied vector:\n";
    for (int num : vect2)
    {
        cout << num << "\n";
    }
}