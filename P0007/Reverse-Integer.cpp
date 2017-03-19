/*
 * =====================================================================================
 *
 *       Filename:  Reverse-Integer.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2017 14:42:02
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
    int reverse(int x) {

        int sgn = 1;
        if (x < 0) {
            x = -x;
            sgn = -1;
        }
        queue<int> s;
        while (x) {
            s.push(x % 10);
            x /= 10;
        }
        long long result = 0;
        //cout << INT_MAX << endl;
        while (!s.empty()) {
            result *= 10;
            result += s.front();
            s.pop();
        }
        result *= sgn;
        if (result > INT_MAX || result < INT_MIN) {
            return 0;
        } else {
            return result;
        }
    }
};
