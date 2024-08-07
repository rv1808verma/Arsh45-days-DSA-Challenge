// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/

    TreeNode* prev=NULL;
    void flatten(TreeNode* root) {
        if (root == NULL) return;

        flatten(root -> right);
        flatten(root -> left);

        root -> right = prev;
        root -> left = NULL;
        prev = root;    
    }
