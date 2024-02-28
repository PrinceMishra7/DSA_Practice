from queue import Queue

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findBottomLeftValue(self, root: Optional[TreeNode]) -> int:
        if root==None:
            return 0
        
        q=Queue()
        lot=[]
        q.put(root)
        while not q.empty():
            curLevel=[]
            curSize=q.qsize()
            for _ in range(0,curSize):
                node=q.get()
                curLevel.append(node.val)
                if node.left:
                    q.put(node.left)
                if node.right:
                    q.put(node.right)
            lot.append(curLevel)
        
        return lot[-1][0]
                
        


        