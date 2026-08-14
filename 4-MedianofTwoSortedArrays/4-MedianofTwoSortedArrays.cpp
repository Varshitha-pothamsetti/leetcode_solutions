// Last updated: 14/08/2026, 10:11:17
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        if(nums1.size() > nums2.size()){
5            swap(nums1, nums2);
6        }
7        int l = 0, h = nums1.size();
8        int n = nums1.size(), m =  nums2.size();
9        while(l <= h){
10            int cut1 = (l + h) / 2;
11            int cut2 = ((n + m + 1) / 2) - cut1;
12
13            int l1 = (cut1 <= 0) ? INT_MIN : nums1[cut1 - 1];
14            int l2 = (cut2 <= 0) ? INT_MIN : nums2[cut2 - 1];
15            int r1 = (cut1 >= n) ? INT_MAX : nums1[cut1];
16            int r2 = (cut2 >= m) ? INT_MAX : nums2[cut2];
17
18
19            if(l1 <= r2 && l2 <= r1){
20                double ans = max(l1, l2);
21                if((n + m) % 2 == 0) ans = (ans + min(r1, r2)) / 2.0;
22                return ans;
23            }
24            else if(l1 > r2){
25                h = cut1 - 1;
26            }
27            else{
28                l = cut1 + 1;
29            }
30        }
31        return 0;
32    }
33};