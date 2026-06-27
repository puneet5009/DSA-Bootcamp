// Longest Common Prefix
#include <bits/stdc++.h>
using namespace std;
string LCP(vector<string> &strs)
{
    if (strs.empty())
    {
        return " ";
    }
    string ans = strs[0];
    int n = strs.size();
    for (int i = 0; i < n - 1; i++)
    {

        string s1 = strs[i];
        string s2 = strs[i + 1];
        int size = min(s1.size(), s2.size());
        string current_match = "";
        for (int j = 0; j < size; j++)
        {
            if (s1[j] == s2[j])
            {
                current_match += s1[j];
            }
            else
            {
                break;
            }
        }
        strs[i + 1] = current_match;
        ans = current_match;
    }
    return ans;
}
int main()
{
    vector<string> strs = {"flower", "flowe", "floight"};
    string s = LCP(strs);
    cout << "string :" << s;
    return 0;
}