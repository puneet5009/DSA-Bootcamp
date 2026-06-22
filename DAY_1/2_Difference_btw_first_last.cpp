// Difference between first and last element in an array
#include <iostream>
#include <vector>
using namespace std;
int difference_Btw_First_Last_Value(const vector<int> &v)
{
    return v[v.size() - 1] - v[0];
}

int difference_Btw_First_Last_Index(const vector<int> &v)
{
    return (v.size()) - 1;
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

    int value = difference_Btw_First_Last_Value(v);
    cout << "Difference Between Last and First Element:" << value << endl;

    int index = difference_Btw_First_Last_Index(v);
    cout << "Difference Between Last and First Index:" << index << endl;
    return 0;
}