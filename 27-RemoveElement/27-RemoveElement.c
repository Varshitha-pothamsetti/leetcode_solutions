// Last updated: 01/03/2026, 20:23:15
int removeElement(int* nums, int numsSize, int val) {
    int count=0;
    for(int i=0;i<numsSize;i++){
            if(nums[i]==val){
                count++;
            }
            else
            {
                nums[i-count]=nums[i];
            }
        } 
    return (numsSize-count);
}