// Last updated: 09/09/2026, 21:26:51
int averageValue(int* nums, int numsSize) {
    int sum=0;
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%6==0){
            sum+=nums[i];
            count++;
        }
    }
    if(count==0){
        return 0;
    }else
    {
        return sum/count;
    }
    return sum/count;
}
