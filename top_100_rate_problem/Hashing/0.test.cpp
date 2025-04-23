#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int rows = matrix.size(), columns = matrix[0].size(), low = 0, high = rows - 1;
            while (low < high)
            {
                for (int i = 0; i < columns; i++)
                {
                    int temp = matrix[low][i];
                    matrix[low][i] = matrix[high][i];
                    matrix[high][i] = temp;
                }
                low++; high--;
            }
            for (int i = 0; i < rows; i++)
            {
                for (int j = i + 1; j < columns; j++)
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    return 0;
}