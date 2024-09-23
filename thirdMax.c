int thirdMax(int* nums, int numsSize) {
    if (numsSize < 3) {
        int max = INT_MIN;
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        return max;
    }

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] < nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    return nums[2]; 
}
