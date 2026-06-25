#include <bits/stdc++.h>
using namespace std;

string OPTIMALS(string s)
{
    int n = s.size();
    string ans;

    int i = 0;

    while (i < n)
    {
        char t = s[i];
        i++;

        int freq = 0;

        while (i < n && isdigit(s[i]))
        {
            freq = freq * 10 + (s[i] - '0');
            i++;
        }

        for (int k = 0; k < freq; k++)
        {
            ans += t;
        }
    }

    return ans;
}

int main()
{
    string s = "a12b3";

    cout << "String Before Decoded: " << s << endl;
    cout << "String After Decoded: " << OPTIMALS(s);

    return 0;
}