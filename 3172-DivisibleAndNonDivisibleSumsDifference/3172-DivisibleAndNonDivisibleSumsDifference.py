# Last updated: 01/03/2026, 20:19:24
class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        num1=num2=0
        for i in range(1,n+1):
            if i%m==0:
                 num2+=i
            else:
                num1+=i
    
        return num1-num2