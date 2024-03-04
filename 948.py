class Solution:
    def bagOfTokensScore(self, tokens: List[int], power: int) -> int:
        tokens.sort()
        maxScore=0
        curScore=0
        left=0
        right=len(tokens)-1
        
        while left<=right:
            if power>=tokens[left]:
                power-=tokens[left]
                curScore+=1
                maxScore=max(maxScore,curScore)
                left+=1
            elif curScore>0:
                power+=tokens[right]
                curScore-=1
                maxScore=max(maxScore,curScore)
                right-=1
            else:
                break
        

        return maxScore