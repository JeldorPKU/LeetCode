/*
 * =====================================================================================
 *
 *       Filename:  Spiral-Matrix-II.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2017 00:04:40
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
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result;
        result.resize(n);
        for (int i = 0; i < n; ++i) result[i].resize(n);
        int u = 0, l = 0, r = n - 1, d = n - 1;
        int count = 0, dest = n * n;
        while (true) {
            for (int i = l; i <= r; ++i) {
                result[u][i] = ++count;
            }
            ++u;
            if (count >= dest) break;
            for (int i = u; i <= d; ++i) {
                result[i][r] = ++count;
            }
            --r;
            if (count >= dest) break;
            for (int i = r; i >= l; --i) {
                result[d][i] = ++count;
            }
            --d;
            if (count >= dest) break;
            for (int i = d; i >= u; --i) {
                result[i][l] = ++count;
            }
            ++l;
            if (count >= dest) break;
        }
        return result;
    }
};
