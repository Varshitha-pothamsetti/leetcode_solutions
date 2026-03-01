// Last updated: 01/03/2026, 20:19:03
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;
        for(int num : nums) totalsum += num;

         int leftsum = 0;
         int count = 0;

         for(int i = 0; i < n - 1; i++){
            leftsum = nums[i];
            int rightsum = totalsum - leftsum;

            if((leftsum % 2) == (rightsum % 2)){
                count++;
            }
         }
         return count;
    }
};