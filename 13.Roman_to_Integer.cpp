class Solution {
public:
    int romanToInt(string s) {
        int m = s.size(); int chk_I, chk_V, chk_X, chk_L, chk_C, chk_D, chk_M;
        for (int i = 0; i < m; i++)
        {
            if (s[i] == 'I')
            {
                chk_I++;
            }
            else if (s[i] == 'V')
            {
                chk_V++;
            }
            else if (s[i] == 'X')
            {
                chk_X++;
            }
            else if (s[i] == 'L')
            {
                chk_L++;
            }
            
        }
        return {};
    }
};
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000