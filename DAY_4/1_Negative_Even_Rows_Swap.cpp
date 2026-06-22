// Negative of even rows and swap those rows in a matrix

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> NERS(vector<vector<int>> &Matrix)
{
    for (int i = 0; i < Matrix.size(); i++)
    {
        for (int j = 0; j < Matrix[i].size(); j++)
        {
            if (i % 2 == 0)
            {
                Matrix[i][j] = (-Matrix[i][j]);
            }
        }
    }
    for (int i = 0; i + 1 < Matrix.size(); i += 2)
    {

        swap(Matrix[i], Matrix[i + 1]);
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

    vector<vector<int>> ans = NERS(Matrix);
    for (auto num : ans)
    {
        for (int num2 : num)
        {
            cout << num2 << " ";
        }
        cout << endl;
    }
    return 0;
}