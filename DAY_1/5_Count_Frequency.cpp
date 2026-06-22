#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> count_freq(const vector<int> &v)
{
    unordered_map<int, int> um;
    for (int num : v)
    {
        um[num]++;
    }
    return um;
}
int main()
{
    cout << "Enter Size of Vector";
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<int, int> J = count_freq(v);
    for (auto num : J)
    {
        cout << num.first << "->";
        cout << num.second << endl;
    }
    return 0;
}
