/*
 * =====================================================================================
 *
 *       Filename:  Palindrome-Linked-List.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2017 14:30:47
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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) return true;
        int len = 0;
        for (auto p = head; p != nullptr; p = p->next, ++len);
        ListNode *p = head;
        stack<int> myStack;
        for (int i = 0; i < len / 2; ++i) {
            myStack.push(p->val);
            p = p->next;
        }
        if (len & 1) p = p->next;
        while (p != nullptr) {
            if (p->val != myStack.top()) return false;
            p = p->next;
            myStack.pop();
        }
        return true;
    }
};
