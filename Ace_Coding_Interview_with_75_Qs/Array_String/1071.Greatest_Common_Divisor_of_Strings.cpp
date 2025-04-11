#include <bits/stdc++.h>
using namespace std;
int gcd_find(int str1_size, int str2_size)
{
    int value = min(str1_size, str2_size);
    for (int i = value; i > 0; i--)
    {
        if ((str1_size % i == 0) && (str2_size % i == 0))
        {
            return i;
        }
    }
    return 1; // return 1 because 1 can divide all num
    // never skip math lesson bro
}
class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
            string result = "";
            if (str1 + str2 != str2 + str1)
            {
                return result;
            }
            int length = gcd_find(str1.size(), str2.size());
            return str1.substr(0, length);
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution solution1;
    string result = solution1.gcdOfStrings("ABCABC", "ABC");
    cout << result;
    return 0;
}