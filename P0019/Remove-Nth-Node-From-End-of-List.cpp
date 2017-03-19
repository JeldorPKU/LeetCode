/*
 * =====================================================================================
 *
 *       Filename:  Remove-Nth-Node-From-End-of-List.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2017 14:39:10
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p, *prev, *newHead;
        newHead = new ListNode(0);
        p = newHead;
        p->next = head;
        int len = 0;
        while (p->next) {
            ++len;
            p = p->next;
        }
        cout << len << endl;
        p = newHead;
        for (int i = 0; i < len - n + 1; ++i) {
            prev = p;
            p = p->next;
        }
        prev->next = p->next;
        free(p);
        return newHead->next;
    }
};

