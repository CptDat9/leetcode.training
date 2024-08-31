/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize)
 {
    for (int i = digitsSize -1; i >= 0; i--)
    {
        if(digits[i] == 9)
        {
            digits[i] = 0;
           
        }
        else
        {
            digits[i]+=1;
            *returnSize = digitsSize; 
            return digits;
        }
    
    }
      int* newDigits = (int *)malloc((digitsSize+1)*sizeof(int));
      newDigits[0] =1;
      for (int i = 1; i <= digitsSize; i++)
      {
        newDigits[i] = 0;
      }
      *returnSize = digitsSize+1;
      return newDigits;
}
