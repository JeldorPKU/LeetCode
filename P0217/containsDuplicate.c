#include <stdlib.h>
int greaterThan(const void *a, const void *b) {
    if (*((int *)b) > *((int*)a))
        return 1;
    else
        return -1;
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), greaterThan);
    int i;
    for (i = 0; i < numsSize - 1; ++i) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}

