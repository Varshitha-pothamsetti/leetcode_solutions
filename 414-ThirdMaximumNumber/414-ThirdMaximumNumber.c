// Last updated: 01/03/2026, 20:21:52
void sort(int * arr, int numsSize){
    int key, j;
    for(int i = 1; i <= numsSize - 1; i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] < key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int thirdMax(int* nums, int numsSize) {
    sort(nums, numsSize);
    int maxCount = 1; 
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[maxCount] = nums[i];
            maxCount++;
        }
    }
    if(maxCount >= 3){
        return nums[2];
    }
    return nums[0];
}