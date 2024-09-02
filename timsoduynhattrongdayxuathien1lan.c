int singleNumber(int* nums, int numsSize) {
  for(int i = 0; i < numsSize; i++){
    for(int j = i+1; j < numsSize; j++){
        if(nums[i] == nums[j]){
            nums[i] = nums[j] = NULL;
        }
    }
  }
    for (int i = 0; i<numsSize; i++){

        if(nums[i] != NULL){
            return nums[i];
        }
    }
    return 0;
}
