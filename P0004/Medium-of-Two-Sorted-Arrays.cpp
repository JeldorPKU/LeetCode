/*
 * =====================================================================================
 *
 *       Filename:  Medium-of-Two-Sorted-Arrays.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/17/2017 09:59:42
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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        vector<int>::iterator it1, it2;
        for (it1 = nums1.begin(), it2 = nums2.begin(); !(it1 == nums1.end() && it2 == nums2.end());) {
            if (it1 == nums1.end()) {
                nums.push_back(*(it2++));
            } else if (it2 == nums2.end()) {
                nums.push_back(*(it1++));
            } else {
                if (*it1 < *it2) {
                    nums.push_back(*(it1++));
                } else {
                    nums.push_back(*(it2++));
                }
            }
        }
        int k = nums1.size() + nums2.size();
        if (k % 2) {
            return nums[k / 2];
        } else {
            return (nums[k / 2 - 1] + nums[k / 2]) / 2.0;
        }
    }
};

