// Last updated: 01/03/2026, 20:21:44
#include<stdlib.h>
int comp(const void* a,const void* b) {
    return *(int*)a - *(int*)b;
}
int min(int a, int b){
    return((a<=b)*a+(a>b)*b);
}
int arrayPairSum(int* nums, int numsSize) {
    int sum = 0;
    qsort(nums, numsSize, sizeof(int), comp);
    for(int i = 0; i < numsSize; i+=2){
        sum += min(nums[i], nums[i+1]);
    }
    return(sum);
}