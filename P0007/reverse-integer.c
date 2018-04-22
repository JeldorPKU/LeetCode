int reverse(int x) {
    if (x == 0) return 0;
    if (x == -2147483648) return 0;
    int flag = 1;
    if (x < 0) {
        flag = -1;
        x = -x;
    }
    int a[100] = {0}, i = 0;
    while (x > 0) {
        a[i++] = x % 10;
        x /= 10;
    }
    long long s = 0;
    int j;
    for (j = 0; j < i; ++j) {
        s *= 10;
        s += a[j];
    }
    s *= flag;
    if (s - (int) s == 0)
        return (int)s;
    else
        return 0;
}
