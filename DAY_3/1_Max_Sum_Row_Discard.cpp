#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> MSRD(vector<vector<int>> &v)
{
    int maxSum = INT_MIN;
    int maxRow = -1;

    for (int i = 0; i < v.size(); i++)
    {
        int current_sum = 0;
        for (int j = 0; j < v[i].size(); j++)
        {
            current_sum += v[i][j];
        }
        if (current_sum > maxSum)
        {
            maxSum = current_sum;
            maxRow = i;
        }
    }

    vector<vector<int>> result;
    for (int i = 0; i < v.size(); i++)
    {
        if (i == maxRow)
            continue;
        result.push_back(v[i]);
    }

    return result;
}

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> v(rows, vector<int>(cols));

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> k = MSRD(v);

    cout << "Matrix after discarding max-sum row:" << endl;
    for (auto &row : k)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}