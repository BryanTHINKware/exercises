/**
 * Objective: 
 * - Given head which is a reference node to a singly-linked list.
 * - The value of each node in the linked list is either 0 or 1. 
 *
 * Input: linked list that holds the binary representation of a number.
 *
 * Output: decimal value of binary node values
 *
 * Note: The most significant bit is at the head of the linked list.
 */
#include <iostream>
#include <math.h> 
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        // TODO: add implementation here
    }
};

auto main() -> int {
    Solution s;   
    ListNode* first = new ListNode(1); 
    ListNode* second = new ListNode(0); 
    ListNode* third = new ListNode(1); 
    first->next = second;
    second->next = third;
    cout << "Decimal: " << s.getDecimalValue(first) << endl;
}