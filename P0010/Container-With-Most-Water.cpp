/*
 * =====================================================================================
 *
 *       Filename:  Container-With-Most-Water.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2017 10:26:35
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
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, maxx = 0;
        while (left < right) {
            maxx = max(maxx, (right - left) * min(height[right], height[left]));
            if (height[right] >= height[left]) {
                left++;
            } else {
                right--;
            }
        }
        return maxx;
    }
};
