#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int low = 0, high = nums.size() - 1;
            while (low <= high)
            {
                int mid = low + ((high - low)/2) ;
                if (nums[mid] == target)
                {
                    return mid;
                }
                else if (nums[mid] >= nums[low])
                {
                    if (target >= nums[low] && target <= nums[mid])
                    {
                        high = mid - 1;
                    }
                    else
                    {
                        low = mid + 1;
                    }
                }
                else
                {
                    if (target <= nums[high] && target >= nums[mid])
                    {
                        low = mid + 1;
                    }
                    else
                    {
                        high = mid - 1;
                    }
                }
            }
            return -1;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution;
    return 0;
}