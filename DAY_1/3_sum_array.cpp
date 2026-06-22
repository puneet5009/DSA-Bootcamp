// Sum of array (range given)
#include <iostream>
#include <vector>
using namespace std;
int Sum_Array(const vector<int> &v)
{
    int sum = 0;
    int i = 0;
    while (i < v.size())
    {
        sum += v[i];
        i++;
    }
    return sum;
}
int Sum_Array_Range_Based(const vector<int> &v, int range1, int range2)
{
    int sum = 0;
    int i = range1;
    while (i < v.size())
    {
        if (i <= range2)
        {
            sum += v[i];
        }
        i++;
    }
    return sum;
}
int main()
{
    int n;
    int range1;
    int range2;
    cout << "Enter size of array" << endl;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << "Enter the range 1";
    cin >> range1;

    cout << "Enter the range 2";
    cin >> range2;
    // int sum = Sum_Array(v);
    // cout << "Sum of Array is:" << sum << endl;

    int sum_range = Sum_Array_Range_Based(v, range1, range2);
    cout << "Sum of Array in Range is:" << sum_range << endl;
    return 0;
}