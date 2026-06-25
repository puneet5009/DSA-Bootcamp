// String Compression
#include <bits/stdc++.h>
using namespace std;
string OPTIMALS(string chars)
{

    int n = chars.size();
    int write = 0;
    int i = 0;

    while (i < n)
    {

        char current = chars[i];
        int count = 0;

        while (i < n && chars[i] == current)
        {
            count++;
            i++;
        }

        chars[write++] = current;

        if (count > 1)
        {
            string freq = to_string(count);

            for (char ch : freq)
            {
                chars[write++] = ch;
            }
        }
    }

    chars.resize(write);
    return chars;
}

int OPTIMAL(string chars)
{

    int n = chars.size();
    int write = 0;
    int i = 0;

    while (i < n)
    {

        char current = chars[i];
        int count = 0;

        while (i < n && chars[i] == current)
        {
            count++;
            i++;
        }

        chars[write++] = current;

        if (count > 1)
        {
            string freq = to_string(count);

            for (char ch : freq)
            {
                chars[write++] = ch;
            }
        }
    }

    return write;
}

string SC(string s)
{
    int n = s.length();

    if (n == 0)
        return "";

    string ans;

    int i = 0;

    while (i < n)
    {
        char currentChar = s[i];
        int count = 1;

        while (i + 1 < n && s[i] == s[i + 1])
        {
            count++;
            i++;
        }

        ans += currentChar;

        if (count > 1)
        {
            ans += to_string(count);
        }

        i++;
    }

    return ans;
}

int main()
{
    string s = "aabbbbbccc";

    // cout << SC(s);

    // cout << "Total String Size After Resizing:" << OPTIMAL(s);

    cout << "String  After Resizing: " << OPTIMALS(s);

    return 0;
}