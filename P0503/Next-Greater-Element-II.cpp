/*
 * =====================================================================================
 *
 *       Filename:  Next-Greater-Element-II.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2017 21:25:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class ListNode2 {
public:
    int val;
    ListNode2 *next;
    ListNode2(int n): val(n), next(nullptr) {}
};

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result;
        if (nums.empty()) return result;
        ListNode2 *head = new ListNode2(0);
        ListNode2 *p = head;
        for (auto i: nums) {
            ListNode2 *q = new ListNode2(i);
            p->next = q;
            p = q;
        }
        p->next = head->next;
        ListNode2 *p1 = head->next, *p2;
        do {
            int t = -1;
            for (p2 = p1->next; p2 != p1; p2 = p2->next) {
                if (p2->val > p1->val) {
                    t = p2->val;
                    break;
                }
            }
            result.push_back(t);
            p1 = p1->next;
        } while (p1 != head->next);
        return result;
    }
};
