// Last updated: 13/09/2026, 14:09:55
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
13    ListNode* swapPairs(ListNode* head) {
14        if(head == nullptr || head->next == nullptr){
15            return head;
16        }
17            ListNode* second = head->next;
18            head->next = swapPairs(second->next);
19            second->next = head;
20            return second;
21    }
22};