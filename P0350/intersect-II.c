/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *p1 = nums1, *p2 = nums2, s1 = nums1Size, s2 = nums2Size;
    int i;
    *returnSize = 0;
    if (s1 == 0)
        return nums1;
    else if (s2 == 0)
        return nums2;
    if (s1 > s2) {
        p1 = nums2;
        p2 = nums1;
        int t = s1;
        s1 = s2;
        s2 = t;
    }
    int *result = calloc(s1, sizeof(int));

    int tableSize = 5011;
    struct ListNode **hashtbl = malloc(tableSize * sizeof(struct ListNode *));
    for (i = 0; i < tableSize; ++i) {
        hashtbl[i] = malloc(sizeof(struct ListNode));
        hashtbl[i]->val = 0;
        hashtbl[i]->next = NULL;
    }
    struct ListNode *header;
    int index;
    for (i = 0; i < s1; ++i) {
        struct ListNode *p = malloc(sizeof(struct ListNode));
        p->val = p1[i];
        index = p1[i] % tableSize;
        if (index < 0) index += tableSize;
        header = hashtbl[index];
        p->next = header->next;
        header->next = p;
    }

    for (i = 0; i < s2; ++i) {
        struct ListNode *prev, *p;
        index = p2[i] % tableSize;
        if (index < 0) index += tableSize;
        header = hashtbl[index];
        prev = header;
        p = header->next;
        while (p != NULL && p->val != p2[i]) {
            prev = p;
            p = p->next;
        }
        if (p != NULL) {
            result[(*returnSize)++] = p2[i];
            prev->next = p->next;
            free(p);
        }
    }
    return result;
}
