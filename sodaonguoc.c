#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) {
        return false; 
    }

    int k = x; 
    int reverse = 0;

    while (x > 0) {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x / 10;
    }


    return reverse == k;
}
