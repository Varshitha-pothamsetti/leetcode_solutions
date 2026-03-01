// Last updated: 01/03/2026, 20:20:03
int subsetXORSum(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<(1<<numsSize);i++){
        int XOR=0;
        for(int j=0;j<numsSize;j++){
            if(i & (1<<j)){
                XOR ^= nums[j];
            }
        }
        count += XOR;
    }   
    return count;
}