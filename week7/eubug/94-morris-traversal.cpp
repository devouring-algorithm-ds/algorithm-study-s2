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
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int> answer;

      while(root != nullptr) {
        if(root->left == nullptr) {
          answer.push_back(root->val);
          root = root->right;
        } else {
          TreeNode *curr = root->left;
          while(curr->right && curr->right != root) curr = curr->right;

          if(curr->right == nullptr) {
            curr->right = root;
            root = root->left;
          } else {
            // if not, update the right child
            curr->right = nullptr;
            answer.push_back(root->val);
            root = root->right;
          }
        }
      }

      return answer;
    }
};
