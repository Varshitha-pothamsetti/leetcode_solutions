// Last updated: 04/10/2026, 21:04:37
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    bool isPalindrome(ListNode* head) {
14        ListNode* slow = head, *fast = head;
15        while(fast && fast -> next){
16            slow = slow -> next;
17            fast = fast -> next -> next;
18        }
19        ListNode *prev = NULL, *curr = slow, *next = NULL;
20        while(curr){
21            next = curr -> next;
22            curr -> next = prev;
23            prev = curr;
24            curr = next;
25        }
26        ListNode* left = head, *right = prev;
27        while(right){
28            if(left -> val != right -> val)
29              return false;
30            left = left -> next;
31            right = right -> next;
32        }
33        return true;
34    }
35};