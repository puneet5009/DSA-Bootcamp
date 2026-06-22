// Find max row in a matrix and discard it
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> MVRD(vector<vector<int>> &v)
{
    int row = 0;
    int max = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        int current_max = INT_MIN;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] > current_max)
                current_max = v[i][j];
        }
        if (current_max > max)
        {
            max = current_max;
            row = i;
        }
    }
    vector<vector<int>> res;
    for (int i = 0; i < v.size(); i++)
    {
        if (i == row)
            continue;
        res.push_back(v[i]);
    }
    return res;
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

    vector<vector<int>> k = MVRD(v);

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