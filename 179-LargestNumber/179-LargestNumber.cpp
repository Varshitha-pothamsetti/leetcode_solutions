// Last updated: 28/02/2026, 21:16:01
1class Solution {
2public:
3    string largestNumber(vector<int>& nums) {
4        vector<string>arr;
5        for(int i = 0; i < nums.size(); i++){
6            arr.push_back(to_string(nums[i]));
7        }
8        sort(arr.begin(), arr.end(), [](string a, string b) {
9            return (a + b) > (b + a);
10        });
11
12
13        if(arr[0] == "0"){
14            return "0";
15        }
16            string result = "";
17            for(int i = 0; i < arr.size(); i++){
18                result += arr[i];
19        }
20        return result;
21    }
22};