//1265. Print Immutable Linked List in Reverse
// https://leetcode.com/problems/print-immutable-linked-list-in-reverse/v

  
// Time:  O(n)
// Space: O(n)

/**
 * // This is the ImmutableListNode's API interface.
 * // You should not implement it, or speculate about its implementation.
 * class ImmutableListNode {
 * public:
 *    void printValue(); // print the value of the node.
 *    ImmutableListNode* getNext(); // return the next node.
 * };
 */

class Solution {
public:
    // Recursive
    void printLinkedListInReverse(ImmutableListNode* head) {
        if(!head)
            return;
        
        printLinkedListInReverse(head->getNext());
        head->printValue();
    }
    
    // Iterative
    void printLinkedListInReverse(ImmutableListNode* head) {
        stack<ImmutableListNode*> stk;
        while(head)
        {
            stk.push(head);
            head = head->getNext();
        }
        
        while(!stk.empty())
        {
            stk.top()->printValue();
            stk.pop();
        }
    }   
};
