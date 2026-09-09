// Last updated: 09/09/2026, 21:23:56
int minimumOperations(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++){
        if((nums[i]-1)%3==0) sum++;
        if((nums[i]+1)%3==0) sum++;
    }   
    return sum;
}