/*
 * =====================================================================================
 *
 *       Filename:  Reverse-Linked-List-II.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2017 22:20:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (head == nullptr) return nullptr;
        ListNode *newHead = new ListNode(0);
        newHead->next = head;
        ListNode *p = newHead;
        for (int i = 1; i < m; ++i) p = p->next;
        ListNode *q = newHead;
        for (int i = 1; i < n; ++i) q = q->next;
        ListNode *reverseHead = q->next;
        ListNode *tail = q->next->next;
        while (p->next != reverseHead) {
            ListNode *temp = p->next;
            p->next = temp->next;
            reverseHead->next = temp;
            temp->next = tail;
            tail = temp;
        }
        return newHead->next;
    }
};
