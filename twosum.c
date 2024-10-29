/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
  int* arr = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
  for (int i = 0; i < numsSize-1; i++){
    for (int j = i+1; j < numsSize; j++){
        if(target - nums[i] == nums[j])
        {
            arr[0]=i;
            arr[1]=j;
            return arr;
        }
    }
  }  
   free(arr); 
    *returnSize = 0; // Nếu không tìm thấy, gán kích thước mảng trả về là 0
    return NULL;
}
