#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int dx = 1, dy = 0, rows = matrix.size(), columns = matrix[0].size(), count = 0, i = 0, j = 0;
            vector<int> result;
            while (count < rows*columns)
            {
                result.push_back(matrix[i][j]);
                matrix[i][j] = -101;
                if (i + dy < 0 ||i + dy == rows || j + dx < 0 || j + dx == columns || matrix[i+dy][j+dx] == -101)
                {
                    int temp = dy; dy = dx; dx = -temp;
                }
                i += dy; j += dx; count++;
            }
            return result;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    Solution solution1;
    vector<int> result;
    result = solution1.spiralOrder(matrix);
    int size = result.size();
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << '\n';
    }
    return 0;
}