    int minDepth(TreeNode* root) {
        if(!root) return 0;
        // if(root->left == NULL || root->right == NULL) return 1;
        
        int l,r;
        l = minDepth(root->left);
        r = minDepth(root->right);
        if(l == 0)
            return(1 + r);
        else if(r == 0)
            return (1 + l);
        
        return (1 + ((l < r) ? l : r));
    }