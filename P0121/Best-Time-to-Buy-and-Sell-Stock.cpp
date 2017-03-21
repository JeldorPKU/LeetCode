/*
 * =====================================================================================
 *
 *       Filename:  Best-Time-to-Buy-and-Sell-Stock.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 00:24:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        if (prices.empty()) return 0;
        int maxx = 0, minn = prices.front();
        for (auto it = prices.begin() + 1; it != prices.end(); ++it) {
            if (*it < minn) {
                minn = *it;
            } else {
                profit = *it - minn;
                maxx = max(profit, maxx);
            }
        }
        return maxx;
    }
};
