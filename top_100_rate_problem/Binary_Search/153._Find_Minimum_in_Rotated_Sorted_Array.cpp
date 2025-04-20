#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int dx = 1, dy = 0, x_len = matrix.size(), y_len = matrix[0].size(), count = 1, i = 0, j = 0, temp = 0;
            vector<int> result;
            while (count <= x_len*y_len)
            {
                int value = matrix[i][j];
                result.push_back(value);
                if (i + 1 == x_len || j + 1 == y_len)
                {
                    temp = dy; dy = dx; dx = -temp;
                }
                i += dx; j += dy; count++;
            }
            return result;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<int> result;
    Solution solution1;
    result = solution1.spiralOrder(matrix);
    int size = result.size();
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << '\n';
    }
    return 0;
}