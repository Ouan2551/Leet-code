#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size(), n = matrix[0].size();
            // [0] mean select 1 rows and find columns in rows
            int low = 0, high = m * n - 1;
            while (low <= high)
            {
                int mid = low + (high - low)/2;
                int mid_value = matrix[mid / n][mid % n];
                if (mid_value == target)
                {
                    return true;
                }
                else if (target > mid_value)
                {
                    low = mid + 1;
                }
                else if (target < mid_value)
                {
                    high = mid - 1;
                }
            }
            return false;
        }
    };

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    return 0;
}