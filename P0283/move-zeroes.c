void moveZeroes(int* nums, int numsSize) {
    int *p0 = nums, *p1 = nums;
    while (p1 - nums < numsSize) {
        while (p0 - nums < numsSize && *p0 != 0) ++p0;
        if (p0 - nums >= numsSize - 1) break;
        while (p1 - nums < numsSize && *p1 == 0) ++p1;
        if (p1 - nums < numsSize && p1 > p0) {
            *p0 = *p1;
            *p1 = 0;
            p0++;
        }
        p1++;
    }
}
