// Longest Substring Without Repeating Characters
#include <bits/stdc++.h>
using namespace std;
int LSSWRC(string s)
{
    int ans = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        unordered_set<char> seen;
        for (int j = i; j < n; j++)
        {
            if (seen.count(s[j]))
            {
                break;
            }
            else
            {
                seen.insert(s[j]);
            }
        }
        ans = max(ans, (int)seen.size());
    }
    return ans;
}
int OPTML(string s)
{
    int ans = 0;
    int n = s.size();
    unordered_set<char> seen;
    int left = 0;
    for (int right = 0; right < n; right++)
    {
        while (seen.count(s[right]))
        {
            seen.erase(s[left]);
            left++;
        }
            seen.insert(s[right]);
        
        ans = max(ans, right - left + 1);
    }

    return ans;
}
int main()
{
    string s = "abcabcbb";
    cout << LSSWRC(s);
    // cout << OPTML(s);
    return 0;
}