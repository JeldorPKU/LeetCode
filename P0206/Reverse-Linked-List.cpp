/*
 * =====================================================================================
 *
 *       Filename:  Reverse-Linked-List.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2017 22:02:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode *newHead = new ListNode(0);
        newHead->next = head;
        ListNode *p = head;
        while (p->next != nullptr) p = p->next;
        ListNode *reverseHead = p, *q = head;
        p = nullptr;
        while (q != reverseHead) {
            newHead->next = q->next;
            q->next = p;
            reverseHead->next = q;
            p = q;
            q = newHead->next;
        }
        delete newHead;
        return reverseHead;
    }
};
