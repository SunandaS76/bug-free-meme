class Solution {
    vector<int>pre;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root != NULL)
        {
            pre.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return pre;
    }
};