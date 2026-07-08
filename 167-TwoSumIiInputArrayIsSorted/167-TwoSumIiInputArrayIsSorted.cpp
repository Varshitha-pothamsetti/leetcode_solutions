// Last updated: 08/07/2026, 21:15:41
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while(left < right){
            int sum = numbers[left] + numbers[right];
            if(sum == target){
                return {left + 1, right + 1};
            }
            else if(sum > target){
                right--;
            }
            else{
                left++;
            }
        }
        return {};
    }
};