 bool isBalanced(TreeNode* root) {
       

        if(!root)
            return true;
            
        if(abs(height(root->left) - height(root->right)) > 1)
            return false;
        else
            return (isBalanced(root->left) && isBalanced(root->right));
    }
    
    int height(TreeNode* root){
        int l,r;
        if(root == NULL)
            return 0;
        
        if(root->left == NULL && root->right == NULL)
            return 1;
        
        l = height(root->left);
        r = height(root->right);
       
        return (1 + (l > r ? l : r));
            
    }