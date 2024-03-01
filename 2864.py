class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        cnt1=0
        cnt0=0
        for ch in s:
            if ch=='1':
                cnt1=cnt1+1
            else:
                cnt0=cnt0+1
        
        newStr=""
        for _ in range(0,cnt1-1):
            newStr+="1"
        for _ in range(0,cnt0):
            newStr+="0"
        newStr+="1"
        return newStr
            
        