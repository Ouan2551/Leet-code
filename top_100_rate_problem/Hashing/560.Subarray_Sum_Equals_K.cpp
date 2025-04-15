#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int count = 0, size = nums.size();
            vector<vector<int>> pass_nums;
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (nums[i] + nums[j] == k)
                    {
                        count += 2;
                    }
                    
                }
                
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