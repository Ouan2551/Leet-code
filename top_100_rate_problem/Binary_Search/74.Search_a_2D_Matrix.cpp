class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size(); 
            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j < count; j++)
                {
                    if (a[i][j] == target)
                    {
                        return true;
                    }
                }
            }
            return false;
        }
    };