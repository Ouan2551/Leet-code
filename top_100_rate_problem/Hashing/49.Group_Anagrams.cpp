#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>> ans;
            for (string& word : strs)
            {
                string key = word;
                sort(key.begin(), key.end());
                ans[key].push_back(word);
            }
            vector<vector<int>> result;
            for (auto& value : ans)
            {
                result.push_back(value.second);
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