class Solution {
public:
    vector<int> ino;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root != NULL)
        {
             inorderTraversal(root->left);
            ino.push_back(root->val);
            inorderTraversal(root->right);
        }
       
    return ino;
    }
};