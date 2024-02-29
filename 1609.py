from queue import Queue
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isEvenOddTree(self, root: Optional[TreeNode]) -> bool:
        if root==None:
            return true
        result=[]
        q=Queue()
        q.put(root)
        while not q.empty():
            curSize=q.qsize()
            curLevel=[]
            for _ in range(0,curSize):
                node=q.get()
                curLevel.append(node.val)
                if node.left:
                    q.put(node.left)
                if node.right:
                    q.put(node.right)
            result.append(curLevel)
        
        lvl=0
        for level in result:
            prev=-1
            for ele in level:
                isEven=True
                if ele%2==1:
                    isEven=False
                if lvl%2==0:
                    if not isEven:
                        if prev!=-1:
                            if ele>prev:
                                prev=ele
                                continue
                            else:
                                return False
                        else:
                            prev=ele
                            continue
                    else:
                        return False
                else:
                    if isEven:
                        if prev!=-1:
                            if ele<prev:
                                prev=ele
                                continue
                            else:
                                return False
                        else:
                            prev=ele
                            continue
                    else:
                        return False


            lvl=lvl+1
        return True
            
                
        