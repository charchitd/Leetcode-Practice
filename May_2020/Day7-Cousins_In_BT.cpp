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
private:
     TreeNode* parent_of_a;
      TreeNode* parent_of_b;
      int level_a;
      int level_b;
public:
    
    bool isCousins(TreeNode* root, int a, int b) 
    {
        
        if(root==NULL) return false;
        
        preorder_traversal(root, a, b, NULL, 0);
        
        return ((parent_of_a != parent_of_b) && (level_a == level_b));
        
    }
    
    void preorder_traversal(TreeNode* root, int a, int b, TreeNode* parent, int level) {
        if(root==NULL) return;
        if (root->val == a) {
          parent_of_a = parent;
          level_a = level;
        }
        if (root->val == b) {
          parent_of_b = parent;
          level_b = level;
        }
        preorder_traversal(root->left, a, b, root, level + 1);
        preorder_traversal(root->right, a, b, root, level + 1);
    }

};


// DSA: Tree
// TC: O(n^2)
