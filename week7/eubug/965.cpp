/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
  public:
    set<int> s;
    bool isUnivalTree(TreeNode* root) {
      preorder(root);
      return s.size() == 1;
    }

    void preorder(TreeNode* node) {
      if(!node || s.size() > 1) return;
      s.insert(node->val);
      preorder(node->left);
      preorder(node->right);
    }
};
