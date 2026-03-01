// Last updated: 01/03/2026, 20:22:45
int singleNumber(int* nums, int numsSize) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++){
        ans = ans ^ nums[i];
    }
    return ans;
}