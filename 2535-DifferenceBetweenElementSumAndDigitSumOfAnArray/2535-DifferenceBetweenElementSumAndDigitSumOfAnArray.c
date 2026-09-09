// Last updated: 09/09/2026, 21:26:41
int differenceOfSum(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++){
        int val=nums[i];
        sum+=val;
        while(val){
            sum-=val%10;
            val=val/10;
            }
     }
     return sum;
}  
