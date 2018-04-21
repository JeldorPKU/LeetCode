#include <stdlib.h>
int searchInsert(int* nums, int numsSize, int target) {
    if (target <= *nums)
        return 0;
    else if (target > *(nums + numsSize - 1))
        return numsSize;
    int i;
    for (i = 1; i < numsSize - 1; ++i) {
        if (target > *(nums + i - 1) && target <= *(nums + i))
            break;
    }
    return i;
}

