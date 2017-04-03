/*
 * =====================================================================================
 *
 *       Filename:  Counting-Bits.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2017 18:11:39
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
    vector<int> countBits(int num) {
        vector<int> result;
        result.push_back(0);
        for (int i = 1; i <= num; ++i) {
            result.push_back(result[i / 2] + i % 2);
        }
        return result;
    }
};
