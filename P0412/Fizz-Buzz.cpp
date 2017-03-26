/*
 * =====================================================================================
 *
 *       Filename:  Fizz-Buzz.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2017 17:53:43
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
    string tostr(int k) {
        if (k % 3 && k % 5) {
            return to_string(k);
        } else if (k % 5) {
            return "Fizz";
        } else if (k % 3) {
            return "Buzz";
        } else {
            return "FizzBuzz";
        }
    }
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; ++i) {
            result.push_back(tostr(i));
        }
        return result;
    }
};
