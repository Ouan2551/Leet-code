#include <bits/stdc++.h>
using namespace std;
string find_common_string(string str_low, string str_high, int count)
{
    string result = "";
    for (int i = 1; i <= count; i++)
    {
        string check = str_low.substr(0, i);
        int time = count/i; result = "";
        for (int j = 0; j < time; j++)
        {
            result += check;
        }
        if (result == str_high)
        {
            return check;
        }
    }
    return result;
}
class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
            int size1 = str1.size(), size2 = str2.size(); string result = "";
            if (size1 == size2 && ((str1 != str2) || (str1 == str2)))
            {
                return result;
            }
            else if (size1 < size2)
            {
                cout << 1;
                int count = size1; string result = find_common_string(str1, str2, count);
                return result;
            }
            else if (size2 < size1)
            {
                int count = size2; string result = find_common_string(str2, str1, count);
                return result;
            }
            return result;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    string result = solution1.gcdOfStrings("ABABAB", "ABAB");
    cout << result;
    return 0;
}