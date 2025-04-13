#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            int count_strs = strs.size(); vector<vector<string>> result;
            vector<int> copy_strs; vector<int> check_copy_strs;
            for (int i = 0; i < count_strs; i++)
            {
                copy_strs.push_back(strs[i]);
                sort(copy_strs.begin(), copy_strs.end());
            }
            for (int i = 0; i < count_strs; i++)
            {
                int count_check_copy = check_copy_strs.size();
                for (int j = 0; j < count_check_copy; j++)
                {
                    if (copy_strs[i] == check_copy_strs[j])
                    {
                        break;
                    }
                    check_copy_strs.push_back(copy_strs[i]);
                }
            }
            return result;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    return 0;
}