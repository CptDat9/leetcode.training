#include <string.h>
int strStr(char* haystack, char* needle) {
    int haystackLen = strlen(haystack);
    int needleLen = strlen(needle);
    if (needleLen == 0) return 0; 

    for (int index = 0; index <= haystackLen - needleLen; index++) {
        int check = 0;
        while (check < needleLen && haystack[index + check] == needle[check]) {
            check++;
        }
        if (check == needleLen) return index; 
    }

    return -1; // Không tìm thấy needle trong haystack
}
