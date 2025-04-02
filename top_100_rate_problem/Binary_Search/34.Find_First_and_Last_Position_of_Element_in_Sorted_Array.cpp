#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            vector<int> ans = {-1, -1}; int count = nums.size();
            for (int i = 0; i < count; i++)
            {
                if (nums[i] == target && ans[0] == -1)
                {
                    ans[0] = i, ans[1] = i;
                }
                else if (nums[i] == target && ans[0] != -1)
                {
                    ans[1] = i;
                }
            }
            return ans;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    return 0;
}