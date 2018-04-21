#include <stdlib.h>
char* countAndSay(int n) {
    if (n == 1) return "1";
    if (n == 2) return "11";
    int i;
    char tmp[10000];
    static char result[10000];
    memset(result, 0, sizeof(result));
    result[0] = result[1] = '1';
    result[2] = '\0';
    for (i = 3; i <= n; ++i) {
        strcpy(tmp, result);
        memset(result, 0, sizeof(result));
        int j, cnt = 1, p = 0;
        for (j = 1; j < strlen(tmp); ++j) {
            if (tmp[j] == tmp[j - 1]) {
                ++cnt;
            } else {
                result[p++] = cnt + '0';
                result[p++] = tmp[j - 1];
                cnt = 1;
            }
        }
        result[p++] = cnt + '0';
        result[p++] = tmp[j - 1];
        result[p] = '\0';
    }
    return result;
}

