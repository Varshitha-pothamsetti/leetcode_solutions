// Last updated: 30/09/2026, 18:48:54
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
13    ListNode* removeElements(ListNode* head, int val) {
14        while(head != NULL && head -> val == val){
15            head = head -> next;
16        }
17        ListNode* temp = head;
18        while(temp != NULL && temp -> next != NULL){
19            if(temp -> next -> val == val){
20                temp -> next = temp -> next -> next;
21            }
22            else{
23                temp = temp -> next;
24            }
25        }
26        return head;
27    }
28};