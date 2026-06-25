#include <bits/stdc++.h>
using namespace std;

char FN_RC(string s)
{
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (s[i] == s[j])
                count++;
        }

        if (count == 1)
            return s[i];
    }

    return '\0';
}

int main()
{
    string s;
    cout << "Enter String : " << endl;
    getline(cin, s);

    char ans = FN_RC(s);

    if (ans == '\0')
        cout << "No non-repeating character";
    else
        cout << ans;

    return 0;
}