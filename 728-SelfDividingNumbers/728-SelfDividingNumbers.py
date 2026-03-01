# Last updated: 01/03/2026, 20:21:20
class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        result=[]
        for i in range(left,right+1 ):
            ch=True
            for j in str(i):
                if j!='0':
                    if i%int(j)!=0:
                        ch=False
                else:
                    ch=False
                    break   
            if ch:
                result.append(i)
        return result
        