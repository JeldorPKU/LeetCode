/*
 * =====================================================================================
 *
 *       Filename:  Reverse-Nodes-in-k-Group.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 15:11:38
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr) return nullptr;
        if (k == 1) return head;
        ListNode *p1 = head, *p2, *pk = head, *q, *tail = head;
        int n = k;
        while (--n) {
            pk = pk->next;
            if (pk == nullptr) return head;
        }
        q = p2 = pk->next;
        p1 = head;
        while (head != pk) {
            head = head->next;
            p1->next = p2;
            pk->next = p1;
            p2 = p1;
            p1 = head;
        }
        tail->next = reverseKGroup(q, k);
        return head;
    }
};
