// Last updated: 27/02/2026, 19:58:43
int* buildArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
	register int n = numsSize;
	register int i;
    for(i = 0; i < n; i++) {
    	nums[i] = nums[i] + (nums[nums[i]] % n) * n;
    }
    int j;
    for(j = 0; j < n; ++j) {
    	nums[j] = nums[j] / n;
    }
    return nums;  
}