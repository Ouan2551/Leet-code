#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int rows = matrix.size(), columns = matrix[0].size();
            vector<int> row_locate; vector<int> col_locate;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < columns; j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        row_locate.push_back(i); col_locate.push_back(j);
                    }
                }
            }
            for (int i : row_locate)
            {
                matrix[i] = vector<int>(matrix[i].size(), 0);
            }
            for (int i = 0; i < rows; i++)
            {
                for (int j : col_locate)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    // vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    solution1.setZeroes(matrix);
    return 0;
}