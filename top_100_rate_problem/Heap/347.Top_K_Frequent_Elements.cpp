#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            int count = nums.size(); vector<int> result;
            unordered_map<int, int> check_count;
            for (int i = 0; i < count; i++)
            {
                check_count[nums[i]] += 1;
            }
            count = check_count.size();
            for (int i = 0; i < 2; i++)
            {
                int max_count = INT_MIN;
                for (int j : check_count)
                {
                    max_count = max(max_count, j.second)
                }
                
            }
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    vector<int> nums = {1,1,1,2,2,3};
    solution1.topKFrequent(nums, 2);
    return 0;
}