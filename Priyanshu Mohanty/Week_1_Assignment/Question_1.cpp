/*Write a program to print the numbers from 1 to 100, but replace
multiples of 3 with "Fizz" and multiples of 5 with "Buzz"*/
#include<iostream>
using namespace std;
int main(){
    int n=1;
    for (int i=0;i<100;i++){
        if(n%15==0)
        cout<< "Fizz And Buzz"<<endl;
        else if(n%3==0)
        cout<<"Fizz"<<endl;
        else if(n%5==0)
        cout<<"Buzz"<<endl;
        else 
        cout<<n<<endl;
        n++;
    }
}