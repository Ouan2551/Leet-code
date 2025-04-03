#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size(), n = matrix[0].size();
            for (int row = 0; row < m; row++)
            {
                for (int column = 0; column < n; column++)
                {
                    if (matrix[row][column] == target)
                    {
                        return true;
                    }
                }
            }
            return false;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    return 0;
}