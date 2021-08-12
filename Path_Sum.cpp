// Using bottom to down boolean approch
bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(root->left == NULL && root->right == NULL)
        {
            return (targetSum - root->val == 0);
        }
        return hasPathSum(root->right, targetSum - root->val) || hasPathSum(root->left, targetSum - root->val);
    }

// Using botton to down void approch

class Solution {
    
public:
    bool res = false;
    bool hasPathSum(TreeNode* root, int targetSum) {
       dfs(root, targetSum);
        return res;
    }
    void dfs(TreeNode* root, int sum){
        if(!root) return ;
        if(root->left == NULL && root->right == NULL && root->val == sum) res = true;
        
        dfs(root->left, sum - root->val);
        dfs(root->right, sum - root->val);
    }
};