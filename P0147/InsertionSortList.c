#include <stdlib.h>
#include <malloc.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode *prev, *cur, *p;
    struct ListNode *header = (struct ListNode*)malloc(sizeof(struct ListNode));
    header->val = 0;
    header->next = head;
    int len = 0;
    for (p = header; p->next != NULL; p = p->next) {
        len++;
    }
    int n = 1;
    while (n < len) {
        for (prev = header, cur = prev->next; cur->next != NULL; prev = cur, cur = cur->next);
        prev->next = NULL;
        int i;
        for (i = 0, p = header->next, prev = header; i < n && p->val <= cur->val; prev = p, p = p->next, ++i);
        cur->next = p;
        prev->next = cur;
        ++n;
    }
    return header->next;
}

