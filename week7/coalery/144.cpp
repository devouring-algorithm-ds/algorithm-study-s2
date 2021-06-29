// Time Complexity : O(N)
// Traversal All Node, So O(N)

class Solution {
private:
    vector<int> v;
    void _preorder(TreeNode* cursor) {
        if(cursor == nullptr) return;
        v.push_back(cursor->val);
        _preorder(cursor->left);
        _preorder(cursor->right);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        _preorder(root);
        return v;
    }
};