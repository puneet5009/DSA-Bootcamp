// DNF (Dutch National Flag Algorithm) Sort (0s, 1s, 2s)
#include <bits/stdc++.h>
using namespace std;
vector<int> DNF(vector<int> &nums)
{
    int mover = 0;
    int end = nums.size() - 1;
    int left = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        while (mover <= end)
        {
            if (nums[mover] == 0)
            {
                swap(nums[mover], nums[left]);
                left++;
                mover++;
            }
            else if (nums[mover] == 1)
            {
                mover++;
            }
            else
            {
                swap(nums[mover], nums[end]);
                end--;
            }
        }
    }
    return nums;
}
int main()
{

    int size;

    cout << "Enter number of size: ";
    cin >> size;

    vector<int> array(size);

    cout << "Enter matrix elements:\n";

    for (int j = 0; j < size; j++)
    {
        cin >> array[j];
    }

    vector<int> ans = DNF(array);

    for (int num : ans)
    {
        cout << num << " ";
    }

    return 0;
}