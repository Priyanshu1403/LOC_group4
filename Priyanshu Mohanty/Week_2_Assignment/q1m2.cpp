#include<bits/stdc++.h>
using namespace std;
int freq(const vector<int>& vec,int t ){
    map<int,int>Map;
    for(int num:vec){
        Map[num]++;
    }
    if(Map.find(t)!=Map.end()){
        return Map[t];
    }
    else return 0;

}
int main(){
    int n,m,c;
    vector<int> vect;
    cout<<"Enter the number elements\n";
    cin>>n;
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vect.push_back(temp);
    }
    cout<<"enter the target\n";
    cin>>m;
    c=freq(vect,m);
    cout<<c;
    return 0;
}