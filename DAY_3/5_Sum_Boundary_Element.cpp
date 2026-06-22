// // Sum of boundary elements in a matrix
// #include <bits/stdc++.h>
// using namespace std;
// int SBEM(vector<vector<int>> &Matrix)
// {
//     int sum = 0;
//     for (int i = 0; i < Matrix.size(); i++)
//     {
//         int length = Matrix[i].size() - 1;
//         int j = 0;
//         while (j <= length)
//         {
//             if (j == length)
//             {
//                 sum += Matrix[i][0];
//                 sum += Matrix[i][length];
//             }
//             j++;
//         }
//     }
//     return sum;
// }
// int main()
// {

//     int rows, cols;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     cout << "Enter number of columns: ";
//     cin >> cols;

//     vector<vector<int>> Matrix(rows, vector<int>(cols));

//     cout << "Enter matrix elements:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> Matrix[i][j];
//         }
//     }
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << Matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << endl;
//     cout << "Sum of Boundary Element is:" << SBEM(Matrix);

//     return 0;
// }

// Sum of boundary elements in a matrix
#include <bits/stdc++.h>
using namespace std;

int SBEM(vector<vector<int>> &Matrix)
{
    int sum = 0;
    int rows = Matrix.size();

    for (int i = 0; i < rows; i++)
    {
        int cols = Matrix[i].size();
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                sum += Matrix[i][j];
            }
        }
    }
    return sum;
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

    cout << "Matrix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Sum of Boundary Elements is: " << SBEM(Matrix);

    return 0;
}