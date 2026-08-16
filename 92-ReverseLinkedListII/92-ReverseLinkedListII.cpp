// Last updated: 16/08/2026, 20:44:58
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14        if(left == right)
15            return head;
16        ListNode dummy(0);
17        dummy.next = head;
18        ListNode* prev = &dummy;
19        for(int i = 1; i < left; i++)
20           prev = prev -> next;
21        ListNode* curr = prev -> next;
22        for(int i = 0; i < right - left; i++){
23            ListNode* temp = curr -> next;
24            curr-> next = temp -> next;
25            temp -> next = prev -> next;
26            prev -> next = temp;
27        }
28        return dummy.next;
29    }
30};