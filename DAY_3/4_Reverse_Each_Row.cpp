// Reverse each row in a matrix
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Reverse(vector<vector<int>> &Matrix)
{
    for (int i = 0; i < Matrix.size(); i++)
    {
        for (int j = 0; j < Matrix[i].size();)
        {
            int t = Matrix[i].size() - 1;
            while (t >= j)
            {
                swap(Matrix[i][j], Matrix[i][t]);
                t--;
                j++;
            }
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
    cout << "Real Matrix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Reverse Matrix is:" << endl;
    vector<vector<int>> ans = Reverse(Matrix);
    for (auto &num : ans)
    {
        for (int num2 : num)
        {
            cout << num2 << " ";
        }
        cout << endl;
    }
    return 0;
}
