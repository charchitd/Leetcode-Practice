class Solution {
public:
    //n finding node ; h current depth ; d depth of finding node
    TreeNode* depth(TreeNode* root, int& n, int h, int& d )
    {
        if(root==NULL) return NULL;
        
        //left children
        if(root->left && root->left->val==n)
        {
            d=h+1;
            return root;
        }
        //right children
        if(root->right && root->right->val==n)
        {
            d=h+1;
            return root;
        }
        
        //if not found, move down the tree
        TreeNode* l = depth(root->left,n,h+1,d);
        if(l) return l;
        TreeNode* r = depth(root->right,n,h+1,d);
        if(r) return r;
        
    return NULL;
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) 
    {
        int xDepth=-1, yDepth=-1;
        TreeNode* xParent = depth(root,x,0,xDepth);
        TreeNode* yParent = depth(root,y,0,yDepth);
        
        if(xParent!=yParent && xDepth==yDepth)
            return true;
        else
            return false;
    }
};

