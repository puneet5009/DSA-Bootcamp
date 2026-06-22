// Leaders in an array
//[12,11,4,5,2,3] -> [12,11,5,3]
#include <bits/stdc++.h>
using namespace std;
vector<int> Leaders(const vector<int> &v)
{
    vector<int> res;
    for (int i = 0; i < v.size(); i++)
    {
        bool is_leader = true;
        for (int j = i + 1; j < v.size(); j++)
        {

            if (v[i] < v[j])
            {
                is_leader = false;
                break;
            }
        }
        if (is_leader)
        {
            res.push_back(v[i]);
        }
    }
    return res;
}
vector<int> Optimal(vector<int> &v)
{
    vector<int> res;
    int n = v.size();
    int last = v[n - 1];
    res.push_back(last);

    for (int i = n - 2; i >= 0; i--)
    {

        if (last <= v[i])
        {
            last = v[i];
            res.push_back(v[i]);
        }
    }
    reverse(res.begin(), res.end());
    return res;
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
    cout << "Optimal:" << endl;
    vector<int> optimal = Optimal(v);
    for (int num : optimal)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Brute force:" << endl;
    vector<int> leader = Leaders(v);
    for (int num : leader)
    {
        cout << num << " ";
    }
    return 0;
}