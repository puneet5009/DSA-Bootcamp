// Rotate matrix by 90°
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> R90(vector<vector<int>> &Matrix)
{
    for (int i = 0; i < Matrix.size(); i++)
    {
        for (int j = i + 1; j < Matrix.size(); j++)
        {
            swap(Matrix[i][j], Matrix[j][i]);
        }

        int k = Matrix[i].size() - 1;
        int j = 0;
        while (j <= k)
        {
            swap(Matrix[i][j], Matrix[i][k]);
            j++;
            k--;
        }
    }
    return Matrix;
}
int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> Matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    vector<vector<int>> ans = R90(Matrix);
    for (auto num : ans)
    {
        for (int num1 : num)
        {
            cout << num1 << " ";
        }
        cout << endl;
    }
    return 0;
}