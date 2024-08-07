// https://leetcode.com/problems/range-sum-of-bst/description/

    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)
            return 0;
        
        //Within Range
        if(root->val >= low && root->val <= high) {
            return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        }
        
        //When outside the range (Less than low) - Go right
        if(root->val < low)
            return rangeSumBST(root->right, low, high);

        //When outside the range (Greater than high) - Go left
        return rangeSumBST(root->left, low, high);   
    }

// yt reference video:- https://youtu.be/qIFhQ2m6i64?si=pXPBrarMDqOrlfCV
