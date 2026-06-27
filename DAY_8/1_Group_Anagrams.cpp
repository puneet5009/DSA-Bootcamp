#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> group_anagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    vector<bool> visited(strs.size(), false);

    for (int i = 0; i < strs.size(); i++)
    {
        if (visited[i])
            continue;

        vector<string> group;
        group.push_back(strs[i]);
        visited[i] = true;

        string a = strs[i];
        sort(a.begin(), a.end());

        for (int j = i + 1; j < strs.size(); j++)
        {
            if (visited[j])
                continue;

            string b = strs[j];
            sort(b.begin(), b.end());

            if (a == b)
            {
                group.push_back(strs[j]);
                visited[j] = true;
            }
        }

        ans.push_back(group);
    }

    return ans;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> ans = group_anagrams(strs);

    for (auto group : ans)
    {
        for (auto word : group)
            cout << word << " ";

        cout << endl;
    }
}