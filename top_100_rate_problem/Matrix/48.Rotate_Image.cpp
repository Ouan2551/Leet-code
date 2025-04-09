#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int length = matrix.size();
            int top = 0, bottom = length - 1;
            while (top < bottom)
            {
                for (int i = 0; i < length; i++)
                {
                    int temp = matrix[top][i];
                    matrix[top][i] = matrix[bottom][i];
                    matrix[bottom][i] = temp;
                }
                top++; bottom--;
            }
            for (int row = 0; row < length; row++)
            {
                for (int column = row + 1; column < length; column++)
                {
                    int temp = matrix[row][column];
                    matrix[row][column] = matrix[column][column];
                    matrix[column][row] = temp;
                }
            }
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    return 0;
}