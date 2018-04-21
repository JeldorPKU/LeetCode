#include <stdlib.h>
int gcd(int n, int m) {
    if (n * m == 0)
        return -1;
    if (n < m)
        return gcd(m, n);
    if (n % m == 0)
        return m;
    return gcd(m, n % m);
}

void rotate(int* nums, int numsSize, int k) {
    int q = gcd(numsSize, k);
    if (q % numsSize == 0 || k == 0) return;
    int i;
    for (i = 0; i < q; ++i) {
        int j, tmp1, tmp2 = nums[i], next = i + 1;
        for (j = i; next != i; j = next) {
            next = (j + k) % numsSize;
            tmp1 = nums[next];
            nums[next] = tmp2;
            tmp2 = tmp1;
        }
    }
}

