/*
 * =====================================================================================
 *
 *       Filename:  Merge-Two-Sorted-Lists.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2017 10:04:06
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l = new ListNode(0), *p1 = l1, *p2 = l2, *p = l, *t;
        while (p1 && p2) {
            t = (p1->val < p2->val) ? p1 : p2;
            p->next = new ListNode(t->val);
            p = p->next;
            if (t == p1) {
                p1 = p1->next;
            } else {
                p2 = p2->next;
            }
        }
        t = (p1 == NULL) ? p2 : p1;
        while (t) {
            p->next = new ListNode(t->val);
            p = p->next;
            t = t->next;
        }
        return l->next;
    }
};
