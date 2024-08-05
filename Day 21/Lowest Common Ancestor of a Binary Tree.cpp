// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        
        if(root==p || root==q) return root;

        TreeNode* left=lowestCommonAncestor(root->left, p, q);
        TreeNode* right=lowestCommonAncestor(root->right, p, q);

        if(left!=NULL && right!=NULL) return root;

        if(left!=NULL) return left;
        else return right;  // (right!=NULL)
    }
