#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//     }
//     // return result;
// };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // Solution so;

    //setup
    string nums = ""; int target = 0;
    cin >> nums >> target; int m = nums.size() - 1;

    //use for problem
    char not_convert_nums[m] = {0};int convert_nums[m] = {0};
    for (int i = 0; i <= m; i++)
    {
        if (nums[i] == '['|| nums[i] == ']' || nums[i] == ',')
        {
            continue;
        }
        else
        {
            not_convert_nums[i] = nums[i];
        }
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    for (int i = 0; i <= m; i++)
    {
        cout << "not_convert_nums" << not_convert_nums[i] << endl;
    }
    
    // cout << nums << endl;
    // cout << target << endl;
    return 0;
}

//problem now number like 11 can't mix like 11 it have not mix out