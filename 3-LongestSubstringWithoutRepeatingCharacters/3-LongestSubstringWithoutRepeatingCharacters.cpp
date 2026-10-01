// Last updated: 01/10/2026, 14:29:35
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int freq[256] = {0};
5        int left = 0, ans = 0;
6        for(int right = 0; right < s.length(); right++){
7            freq[s[right]]++;
8            while(freq[s[right]] > 1){
9                freq[s[left]]--;
10                left++;
11            }
12            ans = max(ans, right - left + 1);
13        }
14        return ans;
15    }
16};