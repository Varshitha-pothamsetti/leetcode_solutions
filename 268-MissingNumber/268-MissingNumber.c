// Last updated: 01/03/2026, 20:22:13
int missingNumber(int* nums, int numsSize) {
    int sum = (numsSize * (numsSize + 1) / 2);
    int arraysum = 0;
    for(int i = 0 ; i < numsSize ; i++){
        arraysum += nums[i];
    }
    return (sum - arraysum);
}