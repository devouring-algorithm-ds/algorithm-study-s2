// Time Complexity : O(N)
// Traversal All Node, So O(N)

class Solution {
private:
    vector<int> v;
    void _inorder(TreeNode* cursor) {
        if(cursor == nullptr) return;
        _inorder(cursor->left);
        v.push_back(cursor->val);
        _inorder(cursor->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        _inorder(root);
        return v;
    }
};