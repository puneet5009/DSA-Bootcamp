// Matrix diagonal difference
#include <bits/stdc++.h>
using namespace std;
int MDD(vector<vector<int>> &Matrix)
{
    int sum = 0;
    int sum2 = 0;
    int n = Matrix.size();

    for (int i = 0; i < n; i++)
    {
        sum += Matrix[i][i];
        sum2 += Matrix[i][n - 1 - i];
    }

    return abs(sum - sum2);
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
    cout << MDD(Matrix);
    return 0;
}