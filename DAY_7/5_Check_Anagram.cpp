#include <bits/stdc++.h>
using namespace std;

bool Anagram(string s1, string s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }

    unordered_map<char, int> freq;

    for (char ch : s1)
        freq[ch]++;

    for (char ch : s2)
        freq[ch]--;

    for (auto &p : freq)
    {
        if (p.second < 0)
            return false;
    }

    return true;
}

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    if (Anagram(s1, s2))
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}