/*Write a C++ program to find the total number of alphabets , digits and
special characters in a string.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cout << "Enter a string :\n";
    getline(cin, s1);
    int a = 0;
    int d = 0;
    int sc =0;
    int n = s1.length();

    for (int i = 0; i < n; i++)
    {
        if (('a' <= s1[i]&&s1[i]<= 'z') || ('A' <= s1[i]&&s1[i] <= 'Z'))
        {
            a++;
        }
        else if ('0' <= s1[i]&&s1[i] <= '9')
            d++;
        else
            sc++;
    }
    cout << "Number of letters:" << a << endl<< "Number of digits:" << d << endl;
    cout<< " Number of special char: " <<sc;
    return 0;

}