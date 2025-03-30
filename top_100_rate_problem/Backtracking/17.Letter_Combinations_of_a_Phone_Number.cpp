#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<string> letterCombinations(string digits) {
            // code here
            vector<string> result;
            return result;
        }
    };

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    string digits; cin >> digits;
    // sent digits string to vector name "letterCombinations"
    vector<string> result = solution1.letterCombinations(digits);
    for (auto i : result)
    {
        cout << i << ' ';
    }
    
    return 0;
}