// Rotate String
#include <bits/stdc++.h>
using namespace std;
bool Rotate_String(string s1, string s2)
{
    if (s1.size() != s2.size())
        return false;
    int size = s1.size();
    for (int i = 0; i < size; i++)
    {
        if (s1 == s2)
            return true;

        s1 = s1.substr(1) + s1[0];
    }
    return false;
}
int main()
{
    string s;
    cout << "Enter first string" << endl;
    getline(cin, s);

    string s2;
    cout << "Enter first string" << endl;
    getline(cin, s2);

    cout << Rotate_String(s, s2);
    return 0;
}