    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        if(root->left == NULL && root->right == NULL) return 1;
        int l,r;
        l = maxDepth(root->left);
        r = maxDepth(root->right);
        return (1 + ((l>r) ? l:r));
        }