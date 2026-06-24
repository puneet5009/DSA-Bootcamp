#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin, s);

    int cnt = 0;

    for (char ch : s)
    {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            cnt++;
        }
    }

    cout << "Vowels = " << cnt;

    return 0;
}