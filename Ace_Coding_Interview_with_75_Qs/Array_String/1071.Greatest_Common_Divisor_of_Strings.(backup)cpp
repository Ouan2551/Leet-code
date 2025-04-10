#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
            int size1 = str1.size(), size2 = str2.size(); string result = "";
            if (str1 == str2)
            {
                return result;
            }
            else
            {
                for (int i = 0; i < size1; i++)
                {
                    for (int j = 0; j < size2; j++)
                    {
                        if (str1[i] == str2[j])
                        {
                            result += str1[i];
                            int d1 = i+1, d2 = j+1;
                            while (d1 < str1.size() && d2 < str2.size() && str1[d1] == str2[d2])
                            {
                                result += str1[d1]; d1++; d2++;
                            }
                            if (result.size() == 1)
                            {
                                return result = "";
                            }
                            // find shortest result
                            int count = result.size();
                            for (int i = 1; i <= count; i++)
                            {
                                string loop = result.substr(0, i);
                                int time = count/i;
                                string pattern = "";
                                for (int i = 0; i < time; i++)
                                {
                                    pattern += loop;
                                }
                                if (pattern == result)
                                {
                                    return loop;
                                }
                            }
                            return result;
                        }
                    }
                }
            }
            return result;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    return 0;
}