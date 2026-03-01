// Last updated: 01/03/2026, 20:19:42
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
