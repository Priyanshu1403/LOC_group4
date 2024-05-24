#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter the size of the first vector: ";
    cin >> n;

    vector<int> vec1(n);
    cout << "Enter elements of the first vector:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }

    cout << "Enter the size of the second vector: ";
    cin >> m;

    vector<int> vec2(m);
    cout << "Enter elements of the second vector:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> vec2[i];
    }

    vector<int> mergedVec;
    mergedVec.reserve(n + m);
    for (int i = 0; i < n; i++)
    {
        mergedVec.push_back(vec1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        mergedVec.push_back(vec2[i]);
    }

    cout << "Merged vector in reverse order:\n";
    for (int i = mergedVec.size() - 1; i >= 0; i--)
    {
        cout << mergedVec[i] << " ";
    }
    cout << endl;

    return 0;
}
