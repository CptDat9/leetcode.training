class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        perfix = strs[0]
        for s in strs[1:]:
            while s[:len(perfix)] != perfix:
                perfix = perfix[:-1]
            if not perfix:
                return ""
        return perfix
