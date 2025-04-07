#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            int size = word1.size() + word2.size();
            int m = 0, n = 0; string result = "";
            for (int i = 1; i <= size; i++)
            {
                if (i % 2 != 0 && m < word1.size())
                {
                    result += word1[m]; m++;
                }
                else if (i % 2 == 0 && n < word2.size())
                {
                    result += word2[n]; n++;
                }
                else if (m <= word1.size() && n == word2.size())
                {
                    result += word1[m]; m++;
                }
                else if (m == word1.size() && n <= word2.size())
                {
                    result += word2[m]; n++;
                }
            }
            return result;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
}