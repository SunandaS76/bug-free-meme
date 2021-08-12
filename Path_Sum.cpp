bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(root->left == NULL && root->right == NULL)
        {
            return (targetSum - root->val == 0);
        }
        return hasPathSum(root->right, targetSum - root->val) || hasPathSum(root->left, targetSum - root->val);
    }