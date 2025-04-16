#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            unordered_map<int, int> sub_nums;
            sub_nums[0] = 1; int total = 0, count = 0;
            for (int i : nums)
            {
                total += i;
                if (sub_nums.find(total - k) != sub_nums.end())
                {
                    count += sub_nums[total - k];
                }
                sub_nums[total]++;
            }
            return count;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    vector<int> nums = {1,1,1};
    int count = solution1.subarraySum(nums, 2);
    cout << count;
    return 0;
}