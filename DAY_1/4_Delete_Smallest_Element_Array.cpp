// Delete the smallest element from an array
#include <iostream>
#include <vector>
using namespace std;
vector<int> Delete_Smallest(vector<int> &v)
{
    int min = v[0];
    // vector<int> Z;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }

    int j = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != min)
        {
            v[j] = v[i];
            j++;
        }
    }

    v.resize(j);
    return vector<int>(v.begin(), v.end());
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

    vector<int> l = (Delete_Smallest(v));
    for (int num : l)
    {
        cout << num << " ";
    }
    return 0;
}