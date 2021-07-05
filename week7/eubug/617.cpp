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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
      if(!root1) return root2;
      if(!root2) return root1;

#if 1
      // recursive
      root1->val += root2->val;
      root1->left = mergeTrees(root1->left, root2->left);
      root1->right = mergeTrees(root1->right, root2->right);
#endif

#if 0
      // iterative using a stack
      stack<TreeNode *> s;
      TreeNode *temp = new TreeNode(0);
      TreeNode *n;
      temp->left = root1;
      temp->right = root2;
      s.push(temp);

      while(!s.empty()) {
        n = s.top(); s.pop();
        if(!n->left || !n->right) continue;
        n->left->val += n->right->val;

        if(n->left->left == nullptr) n->left->left = n->right->left;
        else {
          TreeNode *t = new TreeNode(0);
          t->left = n->left->left;
          t->right = n->right->left;
          s.push(t);
        }

        if(n->left->right == nullptr) n->left->right = n->right->right;
        else {
          TreeNode *t = new TreeNode(0);
          t->left = n->left->right;
          t->right = n->right->right;
          s.push(t);
        }
      }
#endif
      return root1;
    }
};
