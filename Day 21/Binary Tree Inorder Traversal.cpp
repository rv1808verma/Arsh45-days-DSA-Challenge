// https://leetcode.com/problems/binary-tree-inorder-traversal/


    void func(TreeNode*root, vector<int>&ans){
        if(root==NULL) return;
        func(root->left,ans);
        ans.push_back(root->val);
        func(root->right,ans);
    }
   
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        func(root,ans);
        return ans;
    }
