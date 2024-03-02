class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
       squareList=[num*num for num in nums]
       squareList.sort()
       return squareList
        