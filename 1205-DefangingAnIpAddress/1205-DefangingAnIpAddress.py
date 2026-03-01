# Last updated: 01/03/2026, 20:20:54
class Solution:
    def defangIPaddr(self, address: str) -> str:
        s = ''
        for i in address:
            if i == '.': s+='[.]'
            else:s+=i
        return s

        