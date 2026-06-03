// Last updated: 03/06/2026, 19:03:18
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
13ListNode* mergeTwoLists(ListNode* a, ListNode* b){
14    ListNode dummy;
15    ListNode* tail = &dummy;
16    while(a && b){
17        if(a -> val <= b -> val){
18            tail -> next = a;
19            a = a -> next;
20        }
21        else{
22            tail -> next = b;
23            b = b -> next;
24        }
25        tail = tail -> next;
26    }
27    if(a) tail -> next = a;
28    else tail -> next = b;
29    return dummy.next;
30}
31    ListNode* mergeKLists(vector<ListNode*>& lists) {
32        if(lists.empty()) return nullptr;
33        int n = lists.size();
34        while(n > 1){
35            int k = (n + 1) / 2;
36            for(int i = 0; i < n / 2; i++){
37                lists[i] = mergeTwoLists(lists[i], lists[i + k]);
38            }
39            n = k;
40        }
41        return lists[0];
42    }
43};