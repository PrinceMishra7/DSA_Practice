class Solution:
    def __init__(self):
        self.maxi=0

    def heightOfTree(self,root:Optional[TreeNode]) -> int:
        if root==None:
            return 0
        leftHeight=self.heightOfTree(root.left)
        rightHeight=self.heightOfTree(root.right)
        self.maxi=max(self.maxi,leftHeight+rightHeight)
        return 1+max(leftHeight,rightHeight)
        
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if root==None:
            return 0
        self.heightOfTree(root)
        return self.maxi