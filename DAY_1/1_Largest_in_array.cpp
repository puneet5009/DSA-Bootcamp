// Find largest element in array
//[3,4,5,3,1,8] output is 8(value)
//[3,4,5,3,1,8] output is 5(index)
#include <iostream>
#include <vector>
using namespace std;
int Value(const vector<int> &v)
{
    int max = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max;
}

int Index(const vector<int> &v)
{
    int max = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > v[max])
        {
            max = i;
        }
    }
    return max;
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
    int value = Value(v);
    cout << "Largest Value in Vector is:" << value << endl;

    int index = Index(v);
    cout << "Largest Indexed Value in Vector is:" << index;
    return 0;
}