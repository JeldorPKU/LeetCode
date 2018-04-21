int singleNumber(int* nums, int numsSize) {
    int result = nums[0];
    int i;
    for (i = 1; i < numsSize; ++i)
        result ^= nums[i];
    return result;
}
