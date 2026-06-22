// Rotate matrix by 180°
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> R180(vector<vector<int>> &Matrix)
{
    int n = Matrix.size() - 1;

    int temp = n;
    int i = 0;
    while (temp >= i)
    {
        swap(Matrix[i], Matrix[temp]);
        temp--;
        i++;
    }

    for (int i = 0; i <= n; i++)
    {
        int j = 0;
        int size = Matrix[i].size() - 1;
        while (size > j)
        {
            swap(Matrix[i][j], Matrix[i][size]);
            j++;
            size--;
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

    vector<vector<int>> ans = R180(Matrix);
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