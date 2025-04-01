#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int n = nums.size(), low = 0, high = n - 1;
            // warning high != n (nums.size()) because it is index not size array
            // binary search
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target)
                {
                    return mid;
                }
                else if (nums[mid] > target)
                {
                    high = mid - 1;
                }
                else if (nums[mid] < target)
                {
                    low = mid + 1;
                }
            }
            return low;
        }
    };

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    // vector<int> num = [1,3,5,6]; int target = 5;
    // int result = solution1.searchInsert(num, target);
    // cout << result;
    return 0;
}