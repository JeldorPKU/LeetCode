int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *result = (int *)calloc(digitsSize + 1, sizeof(int));
    memcpy(result, digits, digitsSize * sizeof(int));
    *returnSize = digitsSize;
    int i, carry = 1;
    for (i = digitsSize - 1; carry > 0 && i >= 0; --i) {
        result[i] += carry;
        if (result[i] == 10) {
            result[i] = 0;
            carry = 1;
        } else {
            carry = 0;
        }
    }
    if (carry) {
        (*returnSize)++;
        result[0] = 0;
        for (i = *returnSize - 1; i > 0; --i) {
            result[i] = result[i - 1];
        }
        result[0] = 1;
    }
    return result;
}
