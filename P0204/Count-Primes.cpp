/*
 * =====================================================================================
 *
 *       Filename:  Count-Primes.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2017 09:45:45
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
    int countPrimes(int n) {
        if (n < 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        vector<int> primes;
        for (int i = 2; i < n; ++i) {
            if (isPrime[i - 1]) primes.push_back(i);
            int j = i << 1;
            while (j <= n) {
                isPrime[j - 1] = false;
                j += i;
            }
        }
        return primes.size();
    }
};
