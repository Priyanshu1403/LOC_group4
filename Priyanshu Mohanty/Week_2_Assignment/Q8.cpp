// Write a C++ program to find the number of vowels and consonants in a string.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cout<<"Enter a string :\n";
    getline(cin,s1);
    int v=0;
    int c=0;
    int n = s1.length();

    for(int i=0;i<n;i++){
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] =='u'){
            v++;
        }
        else if (s1[i]==' ') continue;
        else c++;
    }
    cout<<"Number of vowels:"<<v<<endl<<"Number of consonants:"<<c<<endl;
    return 0;
}