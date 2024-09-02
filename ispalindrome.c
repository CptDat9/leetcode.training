bool isPalindrome(char* s) {
    int right = strlen(s)-1;
    int left = 0;
    while(left < right)
    {
    while (left < right && !isalnum(s[left]))
    {
        left++;
    }
    while(left < right && !isalnum(s[right]))
    {
        right--;
    }
    if(tolower(s[left])!= tolower(s[right]))
    {
        return false;
    }
    left++;
    right--;
}
return true;
}
