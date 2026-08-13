// Last updated: 13/08/2026, 11:49:50
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        ListNode dummy(0);
15        ListNode* tail = &dummy;
16
17        while (list1 && list2) {
18            if (list1->val <= list2->val) {
19                tail->next = list1;
20                list1 = list1->next;
21            } else {
22                tail->next = list2;
23                list2 = list2->next;
24            }
25            tail = tail->next;
26        }
27
28        tail->next = (list1) ? list1 : list2;
29        return dummy.next;
30    }
31};
32