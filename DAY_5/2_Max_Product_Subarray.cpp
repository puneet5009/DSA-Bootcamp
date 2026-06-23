// Max Product Subarray
#include <bits/stdc++.h>
using namespace std;
int MPSAOPTML(vector<int> &nums)
{
    int ans = 1;
    int leftptr = 0;
    int rightptr = nums.size() - 1;
    int leftprdt = 1;
    int rightprdt = 1;
    for (int i = 0; leftptr < nums.size() && rightptr >= 0; i++)
    {
        if (leftprdt == 0)
            leftprdt = 1;
        if (rightprdt == 0)
            rightprdt = 0;

        leftprdt *= nums[leftptr];
        rightprdt *= nums[rightptr];
        ans = max(ans, max(leftprdt, rightprdt));

        leftptr++;
        rightptr--;
    }

    return ans;
}
int MPSA(vector<int> &nums)
{
    int max = nums[0];
    int current_max = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i;
        while (j < nums.size())
        {
            current_max *= nums[j];
            if (current_max > max)
            {
                max = current_max;
            }
            j++;
        }

        current_max = 1;
    }
    return max;
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

    // cout << MPSA(array) <<endl; //Brute Force O(n²)

    cout << MPSAOPTML(array); // Optimal solution O(n)

    return 0;
}