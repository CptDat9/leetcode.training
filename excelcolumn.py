class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        S='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
        s=''
        while columnNumber > 0:
            columnNumber -=1
            k = columnNumber%26
            columnNumber //=26
            s = S[k] + s
        return s
