class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set_nums1=set()
        for num1 in nums1:
            set_nums1.add(num1)
        
        set_nums2=set()
        for num2 in nums2:
            set_nums2.add(num2)
        
        set_ans=set_nums1.intersection(set_nums2)

        ans=[]
        for ele in set_ans:
            ans.append(ele)
        return ans
        
        