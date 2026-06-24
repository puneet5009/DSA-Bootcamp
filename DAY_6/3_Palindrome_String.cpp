// Palindrome String
#include <bits/stdc++.h>
using namespace std;
bool Palindrome(string s)
{
    string temp;
    for (char ch : s)
    {
        if (isalpha(ch))
        {
            temp += tolower(ch);
        }
    }
    int i = 0;
    int j = temp.size() - 1;
    for (int i = 0; i <= j; i++)
    {
        if (temp[i] != temp[j])
        {
            return false;
        }
        j--;
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter String Value" << endl;
    getline(cin, s);

    cout << "String is Palindrome (1/0):" << Palindrome(s);

    return 0;
}