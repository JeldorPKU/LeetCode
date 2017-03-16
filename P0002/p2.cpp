/*
 * =====================================================================================
 *
 *       Filename:  p2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2017 13:30:34
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p1, *p2, *p, *result, *h;
        p1 = l1;
        p2 = l2;
        int carry = 0;
        result = new ListNode((p1->val + p2->val + carry) % 10);
        carry = (p1->val + p2->val + carry) / 10;
        p1 = p1->next;
        p2 = p2->next;
        h = result;
        while (p1 && p2) {
            int t = p1->val + p2->val + carry;
            h->next = new ListNode(t % 10);
            carry = t / 10;
            h = h->next;
            p1 = p1->next;
            p2 = p2->next;
        }
        p = (p1 == NULL) ? p2 : p1;
        while (p) {
            int t = p->val + carry;
            h->next = new ListNode(t % 10);
            carry = t / 10;
            h = h->next;
            p = p->next;
        }
        if (carry) {
            h->next = new ListNode(1);
        }
        return result;
    }
};

