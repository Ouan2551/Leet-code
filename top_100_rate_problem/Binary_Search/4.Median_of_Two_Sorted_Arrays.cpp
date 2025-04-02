#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int count_nums1 = nums1.size(), count_nums2 = nums2.size();
            vector<int> all_nums;
            for (int i = 0; i < count_nums1; i++)
            {
                all_nums.push_back(nums1[i]);
            }
            for (int i = 0; i < count_nums2; i++)
            {
                all_nums.push_back(nums2[i]);
            }
            sort(all_nums.begin(), all_nums.end());
            int count = all_nums.size();
            if (count % 2 == 0)
            {
                float plus = (all_nums[((count - 1.0)/2.0)] + all_nums[((count - 1.0)/2.0)+1.0])/2.0;
                return plus;
            }
            else if (count % 2 != 0)
            {
                return all_nums[(count - 1)/2];
            }
            return 0;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0):
    Solution solution1;
    return 0;
}