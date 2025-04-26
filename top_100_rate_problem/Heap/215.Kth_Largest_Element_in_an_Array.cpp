#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
            // 1. sort number easy solution
            // int count = nums.size();
            // sort(nums.begin(), nums.end());
            // int result = nums[count - k];
            // return result;

            // 2. using queue
            priority_queue<int, vector<int>, greater<int>> mini_heap;
            for (int i : nums)
            {
                mini_heap.push(i); int size = mini_heap.size();
                if (size > k)
                {
                    mini_heap.pop();
                }
            }
            return mini_heap.top();
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int> nums = {3,2,1,5,6,4};
    Solution solution1;
    int result = solution1.findKthLargest(nums, 2);
    cout << result;
    return 0;
}