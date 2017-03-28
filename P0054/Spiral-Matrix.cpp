/*
 * =====================================================================================
 *
 *       Filename:  Spiral-Matrix.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2017 17:26:16
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
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;
        int count = 0, x = 0, y = 0;
        int m = matrix.size(), n = matrix.front().size();
        int u = 0, d = m - 1, l = 0, r = n - 1;
        int size = m * n;
        while (true) {
            // right
            for (int i = l; i <= r; ++i) {
                result.push_back(matrix[u][i]);
                ++count;
            }
            ++u;
            if (count >= size) break;
            // down
            for (int i = u; i <= d; ++i) {
                result.push_back(matrix[i][r]);
                ++count;
            }
            --r;
            if (count >= size) break;
            // left
            for (int i = r; i >= l; --i) {
                result.push_back(matrix[d][i]);
                ++count;
            }
            --d;
            if (count >= size) break;
            // up
            for (int i = d; i >= u; --i) {
                result.push_back(matrix[i][l]);
                ++count;
            }
            ++l;
            if (count >= size) break;
        }
        return result;
    }
};
