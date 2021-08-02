TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL)
            return root1;
        if(root1 != NULL && root2 == NULL){
            root1->left = mergeTrees(root1->left, NULL);
            root1->right = mergeTrees(root1->right, NULL);
        }
            
        if(root1 == NULL && root2 != NULL){
            TreeNode* temp;
            temp = root1;
            root1 = root2;
            root2 = temp;
         root1->left = mergeTrees(root1->left, NULL);
            root1->right = mergeTrees(root1->right, NULL);   
        }

        if(root1 != NULL && root2 != NULL){
            root1->val = root1->val + root2->val;
            // cout<<root1->val<<" ";
             root1->left = mergeTrees(root1->left,root2->left);
             root1->right = mergeTrees(root1->right,root2->right);
            
        }
       return root1;
    }