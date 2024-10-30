int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;  // Trả về 0 nếu mảng rỗng
    }

    int index = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {  
            nums[index] = nums[i];
            index++;
        }
    }

    return index; 
}
