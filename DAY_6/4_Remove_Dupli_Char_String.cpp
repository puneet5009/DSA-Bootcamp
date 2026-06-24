// Remove Duplicate Characters from a String
#include <bits/stdc++.h>
using namespace std;
string RDCS(string s)
{
    unordered_set<char> seen;
    string ans;

    for (char ch : s)
    {
        if (seen.find(ch) == seen.end())
        {
            ans += ch;
            seen.insert(ch);
        }
    }

    return ans;
}
int main()
{
    string s;
    cout << "Enter String Value" << endl;
    getline(cin, s);
    cout << RDCS(s);
    return 0;
}