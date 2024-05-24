// Write a C++ program to find maximum occurring integer in an array.
#include <bits/stdc++.h>
using namespace std;
int MaxFreq(const vector<int> &vect)
{
    map<int, int> Map;
    for (int num : vect)
    {
        Map[num]++;
    }
    int count = 0;
    int maxOcc = vect[0];
    for (const auto &pair : Map)
    {
        if (pair.second > count)
        {
            count = pair.second;
            maxOcc = pair.first;
        }
    }
    return maxOcc;
}
int main()
{
    int size;
    cout << "Enter the size: \n";
    cin >> size;
    vector<int> vect;
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        vect.push_back(temp);
    }
    int max = MaxFreq(vect);
    cout << "Number having Max frequency: "<<max<<endl;
    return 0;
}
