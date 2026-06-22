// Longest consecutive increasing subarray or Longest Continuous Increasing Subsequence
//[1,3,5,4,7] -> [1,3,5](OK) / [4,7](!OK)
#include <bits/stdc++.h>
using namespace std;
int LS_BF(vector<int> &v)
{
    int current_max = 1;
    int max = 1;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j - 1] < v[j])
            {
                current_max++;
            }
            else
                break;
        }
        if (max < current_max)
        {
            max = current_max;
        }
        current_max = 1;
    }
    return max;
}
vector<int> Longest_Subsequence_BF(vector<int> &v)
{
    int max = 1;
    int current_max = 1;
    vector<int> res = {v[0]};
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> temp = {v[i]};

        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j - 1] < v[j])
            {
                temp.push_back(v[j]);
                current_max++;
            }
            else
            {
                break;
            }
        }
        if (max < current_max)
        {
            max = current_max;
            res = temp;
        }
        current_max = 1;
    }
    return res;
}
int LS_OPTML(vector<int> &v)
{
    int max = 1;
    int current_max = 1;
    for (int i = 1; i < v.size(); i++)
    {

        if (v[i - 1] < v[i])
        {
            current_max++;
            if (max < current_max)
            {
                max = current_max;
            }
        }
        else
            current_max = 1;
    }

    return max;
}
vector<int> Longest_Subsequence_OPTML(vector<int> &v)
{

    vector<int> ans;

    return ans;
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
    // cout << "Total Longest Increasing subArray is:" LS_BF(v);

    // vector<int> ans = Longest_Subsequence_BF(v);
    // for (int num : ans)
    // {
    //     cout << num << " ";
    // }

    // cout << "Total Longest Increasing subArray is:" << LS_OPTML(v);

    vector<int> anss = Longest_Subsequence_OPTML(v);
    for (int num : anss)
    {
        cout << num << " ";
    }
    return 0;
}
