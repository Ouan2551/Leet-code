#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int count = prices.size(), max_profit = 0;
            int prize = prices[0];
            for (int i = 1; i < count; i++)
            {
                if (prize > prices[i])
                {
                    prize = prices[i];
                }
                max_profit = max(max_profit, prices[i] - prize);
            }
            return max_profit;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    return 0;
}