/*
 * =====================================================================================
 *
 *       Filename:  Best-Time-to-Buy-and-Sell-Stock-II.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 00:25:40
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
        int result = 0;
        for (int i = 1; i < prices.size(); ++i) {
            result += max(prices[i] - prices[i - 1], 0);
        }
        return result;
    }
};
