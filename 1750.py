class Solution:
    def minimumLength(self, s: str) -> int:
        n=len(s)
        left=0
        right=n-1

        while left<right:
            if s[left]!=s[right]:
                break
            cur=s[left]
            while left<n and left<right and s[left]==cur:
                left+=1
            
            if left>=right:
                return 0

            while right>=0 and s[right]==cur:
                right-=1
            
            # if(left>=right):
            #     return 0
            
        return right-left+1

        