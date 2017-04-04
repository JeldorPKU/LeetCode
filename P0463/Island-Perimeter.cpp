/*
 * =====================================================================================
 *
 *       Filename:  Island-Perimeter.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2017 00:09:39
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
    int islandPerimeter(vector<vector<int>> grid) {
        int p = 0;
        int r = grid.size(), c = grid[0].size();
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (grid[i][j]) {
                    p += 4;
                    if (i > 0 && grid[i - 1][j]) --p;
                    if (i < r - 1 && grid[i + 1][j]) --p;
                    if (j > 0 && grid[i][j - 1]) --p;
                    if (j < c - 1 && grid[i][j + 1]) --p;
                }
            }
        }
        return p;
    }
};
