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
void morrisTraversal(TreeNode* root) {
  vector<int> answer;

  while(root != nullptr) {
    if(root->left == nullptr) {
      answer.push_back(root->val);
      root = root->right;
    } else {
      // inorder predecessor
      TreeNode *curr = root->left;
      while(curr->right && curr->right != root) curr = curr->right;

      // check if inorder prede's right child is root
      if(curr->right == root) {
        curr->right = nullptr;
        root = root->right;
      } else {
        // if not, update the right child
        answer.push_back(root->val);
        curr->right = root;
        root = root->left;
      }
    }
  }
  return answer;
}
