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
    vector<int> answer;
    vector<int> preorderTraversal(TreeNode* root) {
      preorder(root);
      return answer;
    }

    void preorder(TreeNode *node) {
      if(!node) return;

      answer.push_back(node->val);
      preorder(node->left);
      preorder(node->right);
    }
};
