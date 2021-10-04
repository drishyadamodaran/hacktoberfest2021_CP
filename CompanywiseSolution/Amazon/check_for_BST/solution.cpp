class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool helper(Node* root, int min, int max){
        if (root == NULL){
            return true;
        }
        if (root->data < min ){
            return false;
        }
        if (root->data >= max){
            return false;
        }
        return helper(root->left, min, root->data) && helper(root->right, root->data, max);
        
    }
    bool isBST(Node* root) 
    {
        // Your code here
        int min = -1000001;
        int max = 1000001;
        
        return helper(root, min, max);
    }
};
