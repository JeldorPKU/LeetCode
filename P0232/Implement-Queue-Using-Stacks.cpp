/*
 * =====================================================================================
 *
 *       Filename:  Implement-Queue-Using-Stacks.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/19/2017 16:27:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> q, buffer;
    MyQueue() {
        while (!q.empty()) q.pop();
        while (!buffer.empty()) buffer.pop();
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        while (!q.empty()) {
            buffer.push(q.top());
            q.pop();
        }
        buffer.push(x);
        while (!buffer.empty()) {
            q.push(buffer.top());
            buffer.pop();
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int t = q.top();
        q.pop();
        return t;
    }

    /** Get the front element. */
    int peek() {
        return q.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return q.empty();
    }
};
