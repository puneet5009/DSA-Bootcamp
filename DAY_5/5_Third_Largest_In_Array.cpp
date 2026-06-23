#include <bits/stdc++.h>
using namespace std;
int TLIA(vector<int> &nums)
{
    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;

    for (int num : nums)
    {

        if (num == first || num == second || num == third)
            continue;

        if (num > first)
        {
            third = second;
            second = first;
            first = num;
        }
        else if (num > second)
        {
            third = second;
            second = num;
        }
        else if (num > third)
        {
            third = num;
        }
    }

    return (third == LLONG_MIN) ? first : third;
}
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << " 3rd Largest is:" << TLIA(v);
    return 0;
}