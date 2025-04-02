#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int count = nums.size();
            for (int i = 0; i < count; i++)
            {
                if (nums[i] == target)
                {
                    return i;
                }
            }
            return -1;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    return 0;
}