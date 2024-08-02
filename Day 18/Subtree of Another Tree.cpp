// https://leetcode.com/problems/subtree-of-another-tree/

   bool dfs(TreeNode*root,TreeNode*target)
    {
    if(root==NULL && target==NULL) return true;
    if(root==NULL|| target==NULL) return false;
    if(root->val!=target->val) return false;
    return dfs(root->left,target->left) && dfs(root->right,target->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if(dfs(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
