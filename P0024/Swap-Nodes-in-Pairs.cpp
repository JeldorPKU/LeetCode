/*
 * =====================================================================================
 *
 *       Filename:  Swap-Nodes-in-Pairs.cpp
 *
 *    Description:  Given a linked list, swap every two adjacent nodes and return its head.  For example, Given 1->2->3->4, you should return the list as 2->1->4->3. Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
 *
 *        Version:  1.0
 *        Created:  03/22/2017 14:34:06
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
    ListNode* swapPairs(ListNode* head) {
        ListNode *p1, *p2;
        p1 = head;
        if (p1 == nullptr) return nullptr;
        p2 = head->next;
        if (p2 == nullptr) return head;
        p1->next = swapPairs(p2->next);
        head = p2;
        p2->next = p1;
        return head;
    }
};
