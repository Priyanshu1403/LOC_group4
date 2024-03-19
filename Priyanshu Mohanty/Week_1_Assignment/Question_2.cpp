/*Write a program that takes a number as input and checks whether it is
positive, negative or zero. */
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num==0)cout<<"\nNumber entered is Zero"<<endl;
    else if(num<0) cout<<"\nNumber entered is Negative"<<endl;
    else cout<<"Number Entered is Positive"<<endl;
    return 0;
}