//Write a C++ program to check whether a year is leap year or not .
#include<iostream>
using namespace std;
int main(){
    int y;
    cout << "Enter the year :";
    cin>> y;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
        cout<<"leap year";
    }
    else 
    cout<<"Not a Leap year";
    return 0;
}