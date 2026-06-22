// Containers with Most Water
#include <bits/stdc++.h>
using namespace std;
int Most_Water_Capacity(vector<int> &v)
{
    int max = 0;
    int left = 0;
    int right = v.size() - 1;
    while (left < right)
    {
        int current_max = min(v[left], v[right]) * (right - left);
        if (current_max > max)
        {
            max = current_max;
        }
        if (v[left] < v[right])
        {
            left++;
        }
        else
            right--;
    }
    return max;
}
int main()
{
    int n;
    cout << "Enter size of Array" << endl;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Containers with Most Water: " << Most_Water_Capacity(v);
    return 0;
}