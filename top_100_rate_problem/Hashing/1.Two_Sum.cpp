#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int count = nums.size(); vector<int> result;
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (nums[i] + nums[j] == target)
                    {
                        result.push_back(i); result.push_back(j);
                    }
                }
            }
            return result;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    return 0;
}