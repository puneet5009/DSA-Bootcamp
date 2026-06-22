#include <bits/stdc++.h>
using namespace std;

vector<int> Spiral(vector<vector<int>> &Matrix)
{
    vector<int> ans;

    int top = 0;
    int bottom = Matrix.size() - 1;
    int left = 0;
    int right = Matrix[0].size() - 1;

    while (top <= bottom && left <= right)
    {
        int j = left;
        while (j <= right)
        {
            ans.push_back(Matrix[top][j]);
            j++;
        }
        top++;

        int i = top;
        while (i <= bottom)
        {
            ans.push_back(Matrix[i][right]);
            i++;
        }
        right--;

        if (top <= bottom)
        {
            j = right;
            while (j >= left)
            {
                ans.push_back(Matrix[bottom][j]);
                j--;
            }
            bottom--;
        }

        if (left <= right)
        {
            i = bottom;
            while (i >= top)
            {
                ans.push_back(Matrix[i][left]);
                i--;
            }
            left++;
        }
    }

    return ans;
}

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> Matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    vector<int> ans = Spiral(Matrix);

    for (int num : ans)
    {
        cout << num << " ";
    }

    return 0;
}