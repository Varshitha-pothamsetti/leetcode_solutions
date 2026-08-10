// Last updated: 10/08/2026, 20:07:06
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> ans;
5        stack<int> st;
6        unordered_map<int, int> mp;
7        for(int i = nums2.size() - 1; i >= 0; i--){
8            while(!st.empty() && st.top() <= nums2[i])
9               st.pop();
10
11               if(st.empty())
12                   mp[nums2[i]] = -1;
13               else
14                   mp[nums2[i]] = st.top();
15
16               st.push(nums2[i]);
17        }
18        for(int x : nums1)
19            ans.push_back(mp[x]);
20
21        return ans;
22    }
23};