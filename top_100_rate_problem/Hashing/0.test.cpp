#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if (nums.empty() == true)
            {
                return 0;
            }
            else if (nums.size() == 1)
            {
                return 1;
            }
            sort(nums.begin(), nums.end()); int count = nums.size();
            vector<int> length; int long_value = 1, longest = 0;
            for (int i = 0; i < count; i++)
            {
                int num = nums[i];
                for (int j = i + 1; j < count; j++)
                {
                    if (nums[j] == num)
                    {
                        continue;
                    }
                    else if (abs(nums[j] - num) == 1)
                    {
                        long_value++; num = nums[j];
                    }
                }
                length.push_back(long_value); long_value = 1;
            }
            count = length.size();
            for (int i = 0; i < count; i++)
            {
                longest = max(longest, length[i]);
            }
            return longest;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
}