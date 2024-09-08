class Solution:
    def isHappy(self, n: int) -> bool:
        def tongbinhphuong(num):
            tong=0
            while num>0:
                temp = num%10
                tong += temp**2
                num//=10
            return tong
            
        seen = set()
        while n!=1 and n not in seen:
            seen.add(n)
            n = tongbinhphuong(n)
        return n == 1
