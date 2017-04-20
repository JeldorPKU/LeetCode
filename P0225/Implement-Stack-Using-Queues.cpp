/*
 * =====================================================================================
 *
 *       Filename:  Implement-Stack-Using-Queues.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/20/2017 10:29:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class MyStack {
public:
    queue<int> q;
    /** Initialize your data structure here. */
    MyStack() {
        while (!q.empty()) q.pop();
    }

    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        for (int i = 0; i < q.size() - 1; ++i) {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        int t = q.front();
        q.pop();
        return t;
    }

    /** Get the top element. */
    int top() {
        return q.back();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};
