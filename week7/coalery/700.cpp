// Time Complexity : O(lgN)

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr) return nullptr;
        if(val == root->val) return root;
        
        TreeNode* res = nullptr;
        if(val < root->val) res = searchBST(root->left, val);
        else if(val > root->val) res = searchBST(root->right, val);
        return res;
    }
};