// Time Complexity : O(N)
// Traversal All Node, So O(N)

class Solution {
private:
    bool _solve(TreeNode* cursor, int val) {
        if(cursor == nullptr) return true;
        if(cursor->val != val) return false;
        return _solve(cursor->left, val) && _solve(cursor->right, val);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        return _solve(root, root->val);
    }
};