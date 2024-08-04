// https://www.geeksforgeeks.org/problems/largest-bst/1

    bool checkBST(Node* root , int &len , int maxi , int mini){
        if(root == NULL) return true;
        if(root->data <= mini || root->data >= maxi)return false;
        bool left = checkBST(root->left , len , root->data , mini);
        bool right = checkBST(root->right , len , maxi , root->data);
        if(left && right){
            len += 1;
            return true;
        }
        return false;
    }
    void recur(Node* root , int &maxi){
        if(root ==  NULL)return;
        int len = 0;
        if(checkBST(root , len , INT_MAX , INT_MIN)){
            maxi = max(maxi , len);
        }
        recur(root->left , maxi);
        recur(root->right , maxi);
    }
    int largestBst(Node *root)
    {
        //Your code here
        int maxsize = 0;
        recur(root , maxsize);
        return maxsize;
    }
