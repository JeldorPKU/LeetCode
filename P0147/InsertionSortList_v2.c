#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode *prev, *cur, *p;
    struct ListNode *header = (struct ListNode*)malloc(sizeof(struct ListNode));
    header->val = 0;
    header->next = head;
    struct ListNode *result = (struct ListNode*)malloc(sizeof(struct ListNode));
    result->val = 0;
    result->next = NULL;
    while (header->next != NULL) {
        cur = header->next;
        header->next = cur->next;
        for (prev = result, p = result->next; p != NULL && cur->val > p->val; prev = p, p = p->next);
        cur->next = p;
        prev->next = cur;
    }
    return result->next;
}

