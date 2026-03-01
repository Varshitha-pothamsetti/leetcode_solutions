// Last updated: 01/03/2026, 20:20:33
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
   int n2 = 2*n;
   int *arr = malloc(sizeof(int)*n2);
   *returnSize = numsSize;
   int a =0;
   for(int i=0;i<n;i++){
    
    arr[a++] = nums[i];
    arr[a++] = nums[i+n];
    
   }
  
   *returnSize = a;
   return arr;
}