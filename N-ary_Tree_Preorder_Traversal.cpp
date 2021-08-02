class Solution {
public:
    vector<int> result;
    vector<int> preorder(Node* root) {
        if(root != NULL)
        {
            int i=0; 
            result.push_back(root->val);
            while(i != (root->children).size()){
                
                preorder(root->children[i]);
                i++;
            }
            // result.push_back(root);
                
        }
        return result;
    }
};