# Last updated: 08/08/2026, 10:47:05
1class Solution:
2    def calPoints(self, operations: List[str]) -> int:
3        L = []
4        for i in operations:
5            if(i == 'D'):
6                L.append(L[-1] * 2)
7            elif(i == "C"):
8                L.pop()
9            elif(i == "+"):
10                L.append(L[-1] + L[-2])
11            else:
12                L.append(int(i))
13        return sum(L)
14        