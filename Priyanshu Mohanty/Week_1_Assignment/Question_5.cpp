/* Write a C++ program to enter the radius of a circle and find its diameter,
 circumference and area. */
#include<iostream>
using namespace std;
float pi=3.14159265359;
int main()
{
    float rad,dia,cir,ar;
    cout<<"Enter the Radius of the Circle : "<<endl;
    cin>>rad;
    cout << "Diameter of the Circle : "<<rad*2.0<< endl;
    cout << "Circumference of the Circle : "<<rad*2*pi<< endl;
    cout << "Area of the Circle : " <<pi*rad*rad<<endl;
}
