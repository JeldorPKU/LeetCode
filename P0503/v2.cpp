/*
 * =====================================================================================
 *
 *       Filename:  v2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2017 21:26:55
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
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result;
        if (nums.empty()) return result;
        ListNode *head = new ListNode(0);
        ListNode *p = head;
        for (auto i: nums) {
            ListNode *q = new ListNode(i);
            p->next = q;
            p = q;
        }
        p->next = head->next;
        ListNode *p1 = head->next, *p2;
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
