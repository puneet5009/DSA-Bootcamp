// Replace each "ABC" with "*":ABCABCXABCXYbw

#include <bits/stdc++.h>
using namespace std;

string replacePattern(string s)
{
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (i + 2 < s.size() &&
            s[i] == 'A' &&
            s[i + 1] == 'B' &&
            s[i + 2] == 'C')
        {
            ans += '*';
            i += 2;
        }
        else
        {
            ans += s[i];
        }
    }

    return ans;
}

int main()
{
    string s = "ABCABCXABCXYbw";

    cout << replacePattern(s);

    return 0;
}