// Last updated: 01/03/2026, 20:19:39
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
