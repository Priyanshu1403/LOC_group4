/*Write a C++ program to enter two numbers and perform all arithmetic operations using switch case.*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char opp;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Enter the operation(+,-,*,/,%) : "<<endl;
    cin>>opp;
   switch (opp)
   {
   case '+':
    cout<<"Sum = "<<a+b;
    break;
   case '-':
       cout << "Difference = " << a - b;
       break;
   case '*':
       cout << "Product = " << a * b;
       break;
   case '/':
       cout << "Quotient = " << (float)a / b;
       break;
   case '%':
       cout << "Remainder = " << a % b;
       break;
   default:
       cout<<"Invalid Input!!!";
    break;
   }
}