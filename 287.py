class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums.sort()
        n=len(nums)
        for i in range(0,n-1):
            if nums[i]!=nums[i+1]:
                continue
            return nums[i]
        
        return -1

        