// Last updated: 16/08/2026, 20:47:22
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
13    void reorderList(ListNode* head) {
14        if (head == NULL || head->next == NULL)
15            return;
16        ListNode* slow = head;
17        ListNode* fast = head;
18        while (fast->next != NULL && fast->next->next != NULL) {
19            slow = slow->next;
20            fast = fast->next->next;
21        }
22        ListNode* second = slow->next;
23        slow->next = NULL;
24        ListNode* prev = NULL;
25        while (second != NULL) {
26            ListNode* next = second->next;
27            second->next = prev;
28            prev = second;
29            second = next;
30        }
31        second = prev;
32        ListNode* first = head;
33        while (second != NULL) {
34            ListNode* a = first->next;
35            ListNode* b = second->next;
36            first->next = second;
37            second->next = a;
38            first = a;
39            second = b;
40        }
41    }
42};