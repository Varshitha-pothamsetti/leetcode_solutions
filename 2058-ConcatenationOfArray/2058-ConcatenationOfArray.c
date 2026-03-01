// Last updated: 01/03/2026, 20:19:59
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2 * numsSize;
    int* ans = (int*)malloc((*returnSize) * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    } 
    return ans;
}

