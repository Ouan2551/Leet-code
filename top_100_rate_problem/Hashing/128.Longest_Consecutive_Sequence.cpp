#include <bits/stdc++.h>
using namespace std;
// this solution sort vector
class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            sort(nums.begin(), nums.end()); int count = nums.size() - 1;
            for (int i = 0; i < count; i++)
            {
                if ()
                {
                    /* code */
                }
                
            }
            
        }
    };

// this solution not sort code
// class Solution {
//     public:
//         int longestConsecutive(vector<int>& nums) {
//             vector<int> length; int count = nums.size() - 1;
//             for (int i = 0; i < count; i++)
//             {
//                 int num = nums[i], long_continue = 0;
//                 for (int j = 0; j < count; j++)
//                 {
//                     if (nums[j] == num)
//                     {
//                         continue;
//                     }
//                     else if (nums[j] != num && nums[j] > num && nums[j] - num == 1)
//                     {
//                         long_continue++;
//                     }
//                 }
//                 length.push_back(long_continue);
//             }

//             // check length max value
//             int max_val = INT_MIN; count = length.size() - 1;
//             for (int i = 0; i < count; i++)
//             {
//                 max_val = max(max_val, count);
//             }
//             return max_val;
//         }
//     };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
}