/*
 * =====================================================================================
 *
 *       Filename:  Magical-String.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/18/2017 10:20:42
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
    int magicalString(int n) {
        string S = "122";
        int i = 2;
        while (S.length() < n) {
            S += string(S[i++] - '0', S.back() ^ 0x3);
        }
        return count(S.begin(), S.begin() + n, '1');
    }
};

