// // Max Sum Subarray
#include <bits/stdc++.h>
using namespace std;
int MSSA(vector<int> &nums)
{

    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {

        currentSum = max(nums[i], currentSum + nums[i]);

        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
int main()
{
    int size;

    cout << "Enter number of size: ";
    cin >> size;

    vector<int> array(size);

    cout << "Enter vector elements:\n";

    for (int j = 0; j < size; j++)
    {
        cin >> array[j];
    }

    cout << "Sum of Maximum SubArray is: " << MSSA(array);
    return 0;
}