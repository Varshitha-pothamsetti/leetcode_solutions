// Last updated: 26/09/2026, 20:50:50
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
12        ListNode* a = headA;
13        ListNode* b = headB;
14        while(a != b){
15            if(a == NULL)
16               a = headB;
17            else
18               a = a -> next;
19            if(b == NULL)
20               b = headA;
21            else
22               b = b -> next;
23        }
24        return a;
25    }
26};