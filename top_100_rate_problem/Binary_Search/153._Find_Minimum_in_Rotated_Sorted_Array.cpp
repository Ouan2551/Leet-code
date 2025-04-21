#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int findMin(vector<int>& nums) {
            int count = nums.size(), min_num = INT_MAX;
            for (int i = 0; i < count; i++)
            {
                min_num = min(nums[i], min_num);
            }
            return min_num;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    return 0;
}