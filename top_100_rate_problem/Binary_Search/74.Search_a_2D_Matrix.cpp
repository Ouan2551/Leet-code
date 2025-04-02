#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        // problem
        // 1) have something not sure about how to find size vector
        // because it is not normal vector (1 dimension) it is vector<vector> (2 dimension)

        // 2) declare high value don't need -1 just matrix.size() alone
        // 3) forget use index compare target instead value (mid == target) lol
        // 4) don't know how to find mid value for 2d matrix
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int low = 0, high = matrix.size() - 1;
            int m = matrix.size(), n = matrix[0].size();
            while (low <= high)
            {
                int mid = low + (high - low)/2;
                int mid_value = matrix[mid/n][mid%n];
                if (matrix[mid] == target)
                {
                    return true;
                }
                else if (target > matrix[mid])
                {
                    low = mid + 1;
                }
                else if (target < matrix[mid])
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