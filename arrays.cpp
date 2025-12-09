#include <iostream>
#include <vector>
using namespace std;

bool linearsear(int mat[][3], int rows, int cols, int keys)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == keys)
            {
                return true;
            }
        }
    }
    return false;
}
int getmaxsum(int mat[][3], int rows, int cols)
{
    int maxrowsum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowsum += mat[i][j];
        }
        maxrowsum = max(maxrowsum, rowsum);
    }
    return maxrowsum;
}
int diagonalsum(int mat[][4], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
            else if (j == n - i - 1)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}


int main()
{
vector<vector<int>>mat ={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, { 13, 14, 15 , 16}};
cout << mat[0][0]<<endl;

    return 0;
}