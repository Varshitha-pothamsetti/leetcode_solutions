// Last updated: 03/11/2026, 18:52:28
1class Solution {
2public:
3    int minMoves(vector<int>& nums) {
4        int biggest_number = nums[0];
5        for(int current_number : nums){
6            if(current_number > biggest_number){
7                biggest_number = current_number;
8            }
9        }
10        int total_moves = 0;
11        for(int current_number : nums){
12            int steps_needed = biggest_number - current_number;
13            total_moves = total_moves + steps_needed;
14        }
15        return total_moves;
16    }
17};