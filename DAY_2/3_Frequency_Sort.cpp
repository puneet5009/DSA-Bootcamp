// Frequency sort
#include <bits/stdc++.h>
using namespace std;
vector<int> Frequency_sort(vector<int> &v)
{
    unordered_map<int, int> um;
    for (int num : v)
    {
        um[num]++;
    }
    sort(v.begin(), v.end(), [&](int a, int b)
         {
        if (um[a] == um[b])
            return a > b;
        else
            return a < b; });
    return v;
}
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << "Array Before Frequency Sort" << endl;
    for (int num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    vector<int> ans = Frequency_sort(v);
    cout << "Array After Frequency Sort" << endl;
    for (int num : ans)
    {
        cout << num << " ";
    }
    return 0;
}